#include <cstdio>
#include <cstdlib>
#include "black.h"

#define DEBUG printf("Passing [%s] in LINE %d\n",__FUNCTION__,__LINE__)

void play()
{
    fun1();
    fun2();
    fun3();
}
void work()
{
    DEBUG;
    fun4();
    DEBUG;
    // fun5();     //从这四个debug标签，我们知道fun5()挂了 
    DEBUG;
    fun6();
    DEBUG;
}

int main(void)
{
    DEBUG;
    play();
    DEBUG;
    work();         //从main函数的三个debug标签，我们知道work()挂了 
    DEBUG;

    puts("Done.");

    return 0;
}
