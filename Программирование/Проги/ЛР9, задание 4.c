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
float C(int m,int n)
{
    float c=fact(n)/(fact(m)*fact(n-m));
    if(m==0 || m==n)
        return 1;
    else
        return C(m,n-1)+C(m-1,n-1);
}
int main()
{
    int n,m;
    float c;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    c=C(m,n);
    printf("Given binomial coefficient is %g",c);
    getchar(); getchar();
    return 0;
}
