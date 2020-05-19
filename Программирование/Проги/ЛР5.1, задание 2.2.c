#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=4;
main ()
{
    int i,k,X[N],Y[N];
    for(i=0;i<=N;i++)
    {
        printf("X[%d]=",i);
        scanf("%d",&X[i]);
    }
    k=N;
    for(i=0;i<=N;i++)
    {
        Y[k]=X[i];
        k=k-1;
    }
    printf("Your array\n");
    for(i=0;i<=N;i++)
    {
        printf("%d ",Y[i]);
    }
}
