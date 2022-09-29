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
#include "ta_atetop.h"
#include "treeatetop.h"

TA_ATEtop::TA_ATEtop(QWidget* parent)
{
    Q_UNUSED(parent)
    m_libATEtop.setFileName("TreeATEtop");
    m_pATEtop = NULL;
    if(m_libATEtop.load())
    {
        CreateInstTreeATEtop_t fnCreate =
                (CreateInstTreeATEtop_t)m_libATEtop.resolve("CreateTreeATEtop");
        if(fnCreate)
        {
            m_pATEtop = fnCreate(parent);
        }
    }
}

TA_ATEtop::~TA_ATEtop()
{
    if(m_libATEtop.isLoaded())
    {
        if(m_pATEtop)
        {
            m_pATEtop->ExitATEtop();
            DestroyInstTreeATEtop_t fnDestroy =
                    (DestroyInstTreeATEtop_t)m_libATEtop.resolve("DestroyTreeATEtop");
            if(fnDestroy)
            {
                fnDestroy(m_pATEtop);
                m_pATEtop = NULL;
            }
        }
        m_libATEtop.unload();
    }
}

bool TA_ATEtop::InitATEtop()
{
    bool ret = false;
    if(m_pATEtop)
    {
        ret = m_pATEtop->InitATEtop();
    }

    return ret;
}

bool TA_ATEtop::VerifyProcedure(const QString &strSN, const QString &strProcedure)
{
    bool ret = true;
    if(m_pATEtop)
    {
        ret = m_pATEtop->VerifyProcedure(strSN, strProcedure);
    }

    return ret;
}

bool TA_ATEtop::DownloadProject(const QString &strSN, const QString &strProcedure, const QString &workingPath)
{
    bool ret = false;
    if(m_pATEtop)
    {
        ret = m_pATEtop->DownloadProject(strSN, strProcedure, workingPath);
    }

    return ret;
}

void TA_ATEtop::ExitATEtop()
{
    if(m_pATEtop)
    {
        m_pATEtop->ExitATEtop();
    }
}

QString TA_ATEtop::GetLastError()
{
    if(m_pATEtop)
    {
        return m_pATEtop->GetLastError();
    }

    return "No TreeATEtop model";
}
