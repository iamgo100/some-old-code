#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int M=2,N=3;
main ()
{
    int i,j,A[M][N],B[N][M];
    for(i=0;i<M;i++)
        for(j=0;j<N;j++)
        {
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
            B[i][j]=A[j][i];
    printf("\nYour transposed matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
            printf("%d ",B[i][j]);
    printf("\n");
    }
}
