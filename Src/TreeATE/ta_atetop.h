///
/// @brief         TreeATE top Interface
/// @author        David Yin  2022-09 willage.yin@163.com
///
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///
#ifndef TA_ATEXPERT_H
#define TA_ATEXPERT_H

#include <QWidget>
#include <QLibrary>

class TreeATEtop;
class TA_ATEtop
{
public:
    TA_ATEtop(QWidget* parent);
    virtual ~TA_ATEtop();

    bool InitATEtop();
    bool VerifyProcedure(const QString& strSN, const QString& strProcedure);
    bool DownloadProject(const QString& strSN, const QString& strProcedure, const QString& workingPath);
    void ExitATEtop();
    QString GetLastError();

private:
    QLibrary m_libATEtop;
    TreeATEtop* m_pATEtop;
};

#endif // TA_ATEXPERT_H
