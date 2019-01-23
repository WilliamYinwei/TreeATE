#include "devlangchoose.h"
#include "langpy.h"

void* CreateLanguageInst(const char *strLangName)
{
    if(QString(strLangName) == "py")
        return new LangPy();

    return NULL;
}
