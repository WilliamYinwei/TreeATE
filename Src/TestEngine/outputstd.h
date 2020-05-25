///
/// @brief         Standard output
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU LGPL v3
///
/// Distributed under the GNU LGPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/lgpl-3.0.html)
///

#ifndef OUTPUTSTD_H
#define OUTPUTSTD_H

#include "ioutput.h"

class OutputStd : public IOutput
{
public:
    OutputStd();

public:
    virtual bool OpenOutput();
    virtual void CloseOutput();
    virtual bool Save(const QString &strFileName);

    virtual bool OutputTestProjectRst(const TestProjectRst& tpr);
    virtual bool UpdateTestProjectRst(const TestProjectRst& tpr);

    virtual bool OutputTestSuiteRst(const TestSuiteRst& tsr, const QString& strPathParent);
    virtual bool UpdateTestSuiteRst(const TestSuiteRst& tsr);

    virtual bool OutputTestCaseRst(const TestCaseRst& tcr, const QString& strPathParent);
    virtual bool UpdateTestCaseRst(const TestCaseRst& tcr);

    virtual bool OutputDetailRst(const TestResult& tdr, const QString& strPathParent);

protected:
    void printForStart(const QString& time, const QString& path);
    void printForEnd(const QString& spend, const QString& path, const TestResult::TypeTestRst rst);
    void printForStd(const QString& time, const TestResult rst);
};

#endif // OUTPUTSTD_H
