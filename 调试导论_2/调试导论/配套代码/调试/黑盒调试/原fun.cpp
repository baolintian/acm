#include <cstdio>
#include <cstdlib>
#include "black.h"


void play()
{
    fun1();
    fun2();
    fun3();
}
void work()
{
    fun4();
    fun5();
    fun6();
}

int main(void)
{
    play();
    work();

    puts("Done.");

    return 0;
}