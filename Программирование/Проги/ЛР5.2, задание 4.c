#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int M=2,N=4;
main ()
{
    int i,j,k,A[M][N],At[N][M],AAt[M][M],AtA[N][N];
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
            A[i][j]=0;
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    printf("\nYour matrix\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",A[i][j]);
    printf("\n");
    }
    for(i=0;i<N;i++)
        for(j=0;j<M;j++)
        {
            At[i][j]=0;
            At[i][j]=A[j][i];
        }
    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
        {
            AAt[i][j]=0;
            for(k=0;k<N;k++)
                AAt[i][j]+=A[i][k]*At[k][j];
        }
    printf("\nAxAt\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<M;j++)
            printf("%d ",AAt[i][j]);
    printf("\n");
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            AtA[i][j]=0;
            for(k=0;k<M;k++)
                AtA[i][j]+=At[i][k]*A[k][j];
        }
    printf("\nAtxA\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",AtA[i][j]);
    printf("\n");
    }
}
