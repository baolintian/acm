#include <cstdio>
#include <cstdlib>

int f[10000005];

int Fib(int x)
{
    if(f[x]) return f[x];
    f[x]=(Fib(x-1)+Fib(x-2))%1000;
    return f[x];
}

int main(void)
{
    f[1]=1;
    f[2]=1;

    printf("%d\n",Fib(1000000));
    return 0;
}
