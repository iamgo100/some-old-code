#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n)
{
    if (n<=1)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    int n,f;
    printf("Input n: ");
    scanf("%d",&n);
    f=fact(n);
    printf("%d!=%d",n,f);
    getchar(); getchar();
    return 0;
}
