#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
const int N=9;
main ()
{
    int mas[N],i,j,a,k,l,m,m1;
    bool f;
    printf("Input array\n");
    for(i=0;i<=N;i++)
    {
        printf("mas[%d]=",i);
        scanf("%d",&mas[i]);
    }
    k=0; l=0;
    for(i=0;i<=N-1;i++)
    {
        m=mas[i];
        l=i+1;
        m1=mas[l];
        for(k=i+1;k<=N;k++)
        {
            if (mas[k]>m1)
            {
                m1=mas[k];
                l=k;
            }
        }
        if (m1>m)
        {
            mas[l]=mas[i];
            mas[i]=m1;
        }
        j=1;
        f=true;
        while(j<=N-1 && f==true)
        {
            if (mas[j]<mas[j+1])
                f=false;
            else
                j++;
        }
        if (f==true)
            break;
    }
    printf("Your sorted array\n");
    for(i=0;i<=N;i++)
        printf("%d ",mas[i]);
}
