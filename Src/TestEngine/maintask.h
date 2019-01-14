///
/// @project       TreeATE
/// @brief         TestEngine's main task
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef MAINTASK_H
#define MAINTASK_H

#include <QObject>

class QCoreApplication;

class MainTask : public QObject
{
    Q_OBJECT
public:
    explicit MainTask(QObject *parent = 0);

signals:
    void finished();

protected:
    int mainTest();

public slots:
    void run();
private:
    QCoreApplication* m_app;
};

#endif // MAINTASK_H
