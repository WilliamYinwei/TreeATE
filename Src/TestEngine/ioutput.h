///
/// @brief         Output Interface
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef IOUTPUT_H
#define IOUTPUT_H

#include "testrststruct.h"

#include <QtCore/qglobal.h>

#if defined(TESTEXPERT_LIBRARY)
#  define TESTEXPERT_LIBRARY_EXPORT Q_DECL_EXPORT
#else
#  define TESTEXPERT_LIBRARY_EXPORT Q_DECL_IMPORT
#endif

class IOutput
{
public:
    virtual bool OpenOutput() = 0;
    virtual void CloseOutput() = 0;
    virtual bool Save(const QString &strFileName) = 0;

    virtual bool OutputTestProjectRst(const TestProjectRst& tpr) = 0;
    virtual bool UpdateTestProjectRst(const TestProjectRst& tpr) = 0;

    virtual bool OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent) = 0;
    virtual bool UpdateTestSuiteRst(const TestSuiteRst& tsr) = 0;

    virtual bool OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent) = 0;
    virtual bool UpdateTestCaseRst(const TestCaseRst& tcr) = 0;

    virtual bool OutputDetailRst(const TestResult& tdr, const QString& strPathParent) = 0;
};

extern "C" TESTEXPERT_LIBRARY_EXPORT IOutput* CreateOutputInst();

#endif // IOUTPUT_H
