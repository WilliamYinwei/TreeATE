///
/// @brief         Stop the current testing with command line
/// @author        David Yin  2026-9 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#ifdef WIN32
#include <conio.h>
#include <windows.h>
#endif

#include "../../Libs/TACommon/ta_inc.h"
#include "testctrl.h"

#ifndef Q_OS_WIN
#include <poll.h>
#include <unistd.h>
#endif

namespace {

const int INPUT_POLL_INTERVAL_MS = 100;

bool appendInputAndCheckStop(QString& pending, const QString& input,
                             bool flushPending = false)
{
    pending += input;
    if(0 == pending.compare(TA_STOPPED, Qt::CaseInsensitive)) {
        pending.clear();
        return true;
    }

    int tokenStart = 0;
    for(int i = 0; i < pending.size(); ++i) {
        if(!pending.at(i).isSpace())
            continue;

        const QString token = pending.mid(tokenStart, i - tokenStart);
        if(0 == token.compare(TA_STOPPED, Qt::CaseInsensitive))
            return true;

        tokenStart = i + 1;
    }

    pending.remove(0, tokenStart);
    if(flushPending && !pending.isEmpty()) {
        const bool stopped = (0 == pending.compare(TA_STOPPED, Qt::CaseInsensitive));
        pending.clear();
        return stopped;
    }

    return false;
}

}

TestCtrl::TestCtrl(TestRunner *runner)
    : m_pRunner(runner)
    , m_bContinue(true)
{
}

TestCtrl::~TestCtrl()
{
    m_bContinue.store(false);
    requestInterruption();
    if(!wait(3000)) {
        qWarning() << "TestCtrl thread did not stop within timeout";
    }
}

void TestCtrl::run()
{
    bool stopRequested = false;
    QString pendingInput;

#ifdef Q_OS_WIN
    const HANDLE inputHandle = GetStdHandle(STD_INPUT_HANDLE);
    DWORD consoleMode = 0;
    const bool isConsole = inputHandle != NULL
            && inputHandle != INVALID_HANDLE_VALUE
            && GetConsoleMode(inputHandle, &consoleMode);
    const bool isPipe = inputHandle != NULL
            && inputHandle != INVALID_HANDLE_VALUE
            && GetFileType(inputHandle) == FILE_TYPE_PIPE;

    while(m_bContinue.load() && !isInterruptionRequested()) {
        if(isConsole) {
            if(!_kbhit()) {
                QThread::msleep(INPUT_POLL_INTERVAL_MS);
                continue;
            }

            const int ch = _getwche();
            if(ch == 0 || ch == 0xE0) {
                if(_kbhit())
                    (void)_getwch();
                continue;
            }
            if(ch == L'\b') {
                if(!pendingInput.isEmpty())
                    pendingInput.chop(1);
                continue;
            }

            stopRequested = appendInputAndCheckStop(pendingInput, QString(QChar(ch)));
            if(stopRequested)
                break;
            continue;
        }

        if(inputHandle == NULL || inputHandle == INVALID_HANDLE_VALUE)
            break;

        if(isPipe) {
            DWORD bytesAvailable = 0;
            if(!PeekNamedPipe(inputHandle, NULL, 0, NULL, &bytesAvailable, NULL)) {
                stopRequested = appendInputAndCheckStop(pendingInput, QString(), true);
                break;
            }
            if(bytesAvailable == 0) {
                QThread::msleep(INPUT_POLL_INTERVAL_MS);
                continue;
            }

            char buffer[256];
            DWORD bytesRead = 0;
            const DWORD bytesToRead = qMin<DWORD>(bytesAvailable, sizeof(buffer));
            if(!ReadFile(inputHandle, buffer, bytesToRead, &bytesRead, NULL)
                    || bytesRead == 0) {
                stopRequested = appendInputAndCheckStop(pendingInput, QString(), true);
                break;
            }

            stopRequested = appendInputAndCheckStop(
                    pendingInput, QString::fromLocal8Bit(buffer, static_cast<int>(bytesRead)));
            if(stopRequested)
                break;
            continue;
        }

        const DWORD waitResult = WaitForSingleObject(inputHandle, INPUT_POLL_INTERVAL_MS);
        if(waitResult != WAIT_OBJECT_0)
            break;

        char buffer[256] = {0};
        DWORD bytesRead = 0;
        if(!ReadFile(inputHandle, buffer, sizeof(buffer), &bytesRead, NULL) || bytesRead == 0) {
            stopRequested = appendInputAndCheckStop(pendingInput, QString(), true);
            break;
        }

        stopRequested = appendInputAndCheckStop(
                pendingInput, QString::fromLocal8Bit(buffer, static_cast<int>(bytesRead)));
        if(stopRequested)
            break;
    }
#else
    while(m_bContinue.load() && !isInterruptionRequested()) {
        struct pollfd inputPoll;
        inputPoll.fd = STDIN_FILENO;
        inputPoll.events = POLLIN;
        inputPoll.revents = 0;

        const int pollResult = poll(&inputPoll, 1, INPUT_POLL_INTERVAL_MS);
        if(pollResult < 0)
            break;
        if(pollResult == 0)
            continue;
        if(inputPoll.revents & (POLLERR | POLLNVAL))
            break;

        char buffer[256] = {0};
        const ssize_t bytesRead = read(STDIN_FILENO, buffer, sizeof(buffer));
        if(bytesRead <= 0) {
            stopRequested = appendInputAndCheckStop(pendingInput, QString(), true);
            break;
        }

        stopRequested = appendInputAndCheckStop(
                pendingInput, QString::fromLocal8Bit(buffer, static_cast<int>(bytesRead)));
        if(stopRequested)
            break;
    }
#endif

    if(stopRequested && m_pRunner)
        m_pRunner->stop();
}
