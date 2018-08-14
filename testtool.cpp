#include <dejagnu.h>
int main()
{
    TestState t;
    t.testrun(true,"testrun");
    t.pass("pass");
    return failed ;
}
