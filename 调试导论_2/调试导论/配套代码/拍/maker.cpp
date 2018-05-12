#include <cstdio>
#include <cstdlib>
#include <ctime>

int main(int argc,char** argv)
{
    int n=atoi(argv[1]);
    srand(time(0));

    printf("%d\n",rand()%n+1);

    return 0;
}
