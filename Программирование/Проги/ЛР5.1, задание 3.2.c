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
        for(j=N-1;j>=i;j--)
        {
            if(x[j]<x[j+1])
            {
                a=x[j];
                x[j]=x[j+1];
                x[j+1]=a;
            }
        }
    }
    printf("Your sorted array\n");
    for(i=0;i<=N;i++)
    {
        printf("%d ",x[i]);
    }
}
