#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=4;
main ()
{
    int i,k,n,a,X[N];
    for(i=0;i<=N;i++)
    {
        printf("X[%d]=",i);
        scanf("%d",&X[i]);
    }
    k=N; i=0;
    while(k>i)
    {
        a=X[i];
        X[i]=X[k];
        X[k]=a;
        k=k-1; i=i+1;
    }
    printf("Your array\n");
    for(i=0;i<=N;i++)
    {
        printf("%d ",X[i]);
    }
}
