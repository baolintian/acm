#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(int argc,char** argv)
{
    int n=atoi(argv[1]),i;

    srand(time(0));
    
    printf("%d\n",n);

    for(i=2;i<=n;i++)
        printf("%d %d\n",i,rand()%(i-1)+1);
    puts("");

    return 0;
}
