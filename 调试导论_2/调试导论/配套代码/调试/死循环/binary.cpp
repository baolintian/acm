#include <cstdio>
#include <cstdlib>

int f(int x)  {return 2*x*x-3*x-10;}

int main(void)
{
    int l=1,r=10,mid;

    while(l != r)           //求最小的x，使得 x^2-4x > 0
    {
        printf("Consider [%d,%d]\n",l,r);
        mid = (l+r)/2;

        if(f(mid) >= 0) r=mid;
        else l=mid+1;
    }

    printf("%d\n",l);
    
    return 0;
}
