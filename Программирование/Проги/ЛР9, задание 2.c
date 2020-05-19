#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    int n,fi;
    printf("Input n: ");
    scanf("%d",&n);
    fi=fib(n);
    printf("F(%d)=%d",n,fi);
    getchar(); getchar();
    return 0;
}
