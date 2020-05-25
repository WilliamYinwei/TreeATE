///
/// @project       TreeATE Dev
/// @brief         This is CSV file parser
/// @author        David Yin  2019-01 willage.yin@163.com
///
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#include "tacsvparser.h"

#include <QFile>
#include <QTextStream>

TACsvParser::TACsvParser(const QString csvFile)
{
    m_pFileCsv = new QFile(csvFile);
}

TACsvParser::~TACsvParser()
{
    if(m_pFileCsv)
    {
        m_pFileCsv->close();
        delete m_pFileCsv;
    }
}

int TACsvParser::rowCount()
{
    return m_strData.count();
}

int TACsvParser::columnCount(int row)
{
    if(row >= m_strData.count() || row < 0) {
        m_strLastErr = "error: row out of limit";
        return 0;
    }

    QString str = m_strData.at(row);
    QStringList lineData = str.split(',');
    return lineData.count();
}

void TACsvParser::appendData(int row, const QVariant& data)
{
    if(row < 0) {
        m_strLastErr = "error: row < 0";
        return;
    }
    if(row >= m_strData.count())
        m_strData << data.toString();
    else {
        QString lineData = m_strData.at(row);
        lineData += "," + data.toString();
        m_strData.replace(row, lineData);
    }
}

QString TACsvParser::data(int row, int column)
{
    QString str;
    if(row >= m_strData.count() || row < 0) {
        m_strLastErr = "error: row out of limit";
        return str;
    }

    QString lineData = m_strData.at(row);
    QStringList lnData = lineData.split(',');
    if(column >= lnData.count() || column < 0)
        return str;

    return lnData.at(column);
}

bool TACsvParser::parserFile()
{
    if(m_pFileCsv->isOpen()) {
        m_strLastErr = m_pFileCsv->errorString();
        return false;
    }

    if(!m_pFileCsv->open(QIODevice::ReadOnly)) {
        m_strLastErr = m_pFileCsv->errorString();
        return false;
    }

    QTextStream in(m_pFileCsv);
    in.setCodec("ANSI");
    clear();
    while(!in.atEnd()) {
        QString strLine = in.readLine();
        if(strLine.split(',').count() <= 0)
            continue;
        m_strData << strLine;
    }

    m_pFileCsv->close();

    return true;
}

bool TACsvParser::saveFile()
{
    if(m_pFileCsv->isOpen()) {
        m_strLastErr = m_pFileCsv->errorString();
        return false;
    }

    if(!m_pFileCsv->open(QIODevice::WriteOnly))
    {
        m_strLastErr = m_pFileCsv->errorString();
        return false;
    }

    QTextStream out(m_pFileCsv);
    out.setCodec("ANSI");
    foreach(QString strLine, m_strData) {
        if(strLine.split(',').count() <= 0)
            continue;
        out << strLine << "\n";
    }
    out.flush();
    m_pFileCsv->close();
    return true;
}

void TACsvParser::clear()
{
    m_strData.clear();
}

QString TACsvParser::errorString()
{
    return m_strLastErr;
}
