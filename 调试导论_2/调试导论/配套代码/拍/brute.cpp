#include <cstdio>
#include <cstdlib>

int C(int n,int m)
{
    int ans=1,i;

    for(i=0;i<m;i++)
        ans*=n-i;
    for(i=1;i<=m;i++)
        ans/=i;

    return ans;
}

int main(void)
{
    int i,n,ans=0;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
        ans+=C(n,i);

    printf("%d\n",ans);

    return 0;
}
