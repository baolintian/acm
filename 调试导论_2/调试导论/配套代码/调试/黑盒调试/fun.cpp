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
    // fun5();     //�����ĸ�debug��ǩ������֪��fun5()���� 
    DEBUG;
    fun6();
    DEBUG;
}

int main(void)
{
    DEBUG;
    play();
    DEBUG;
    work();         //��main����������debug��ǩ������֪��work()���� 
    DEBUG;

    puts("Done.");

    return 0;
}
