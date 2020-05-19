#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=1;
main ()
{
    int i,X[N],Y[N];
    printf("Input array X:\n");
    for (i=0;i<=N;i++)
    {
        printf("Input X[%d] > ",i);
        scanf("%d",&X[i]);
    }
    for(i=0;i<=N;i++)
    {
        Y[i]=X[i]*X[i];
        printf("Y[%d]=%d\n",i,Y[i]);
    }
}
