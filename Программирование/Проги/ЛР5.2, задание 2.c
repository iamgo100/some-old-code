#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=2;
main ()
{
    int i,j,k,a=9,A[N][N],A1[N][N],A2[N][N],A3[N][N];
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    printf("\nYour matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",A[i][j]);
    printf("\n");
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            A1[i][j]=0; A2[i][j]=0; A3[i][j]=0;
            for(k=0;k<N;k++)
                A1[i][j]+=A[i][k]*A[k][j];
        }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            A1[i][j]*=-2;
            A2[i][j]=A[i][j]*5;
            A3[i][j]=a;
        }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            A3[i][j]+=A1[i][j]+A2[i][j];
    printf("\nResalt\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",A3[i][j]);
    printf("\n");
    }
}
