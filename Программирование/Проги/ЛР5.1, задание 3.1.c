#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=9;
main ()
{
    int x[N],i,j,a;
    printf("Input array\n");
    for(i=0;i<=N;i++)
    {
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=N-1;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            if(x[i]<x[j])
            {
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
    printf("Your sorted array\n");
    for(i=0;i<=N;i++)
    {
        printf("%d ",x[i]);
    }
}
