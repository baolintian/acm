#include <cstdio>
#include <cstdlib>

int gcd(int a,int b)
{
    if(a==0) return a;
    return gcd(b,a%b);
}

int main(void)
{
    printf("%d\n",gcd(30,50));
    
    return 0;
}
