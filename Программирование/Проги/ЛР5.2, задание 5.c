#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=2;
main ()
{
    int i,j,k,A[N][N],B[N][N],C[N][N],AB[N][N],BC[N][N],M1[N][N],M2[N][N];
    printf("Input matrix A:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            A[i][j]=0;
            scanf("%d",&A[i][j]);
        }
    printf("\nMatrix A\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",A[i][j]);
    printf("\n");
    }
    printf("\nInput matrix B:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            B[i][j]=0;
            scanf("%d",&B[i][j]);
        }
    printf("\nMatrix B\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",B[i][j]);
    printf("\n");
    }
    printf("\nInput matrix C:\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            C[i][j]=0;
            scanf("%d",&C[i][j]);
        }
    printf("\nMatrix C\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",C[i][j]);
    printf("\n");
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            AB[i][j]=0;
            for(k=0;k<N;k++)
                AB[i][j]+=A[i][k]*B[k][j];
        }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            M1[i][j]=0;
            for(k=0;k<N;k++)
                M1[i][j]+=AB[i][k]*C[k][j];
        }
    printf("\nResalt 1\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",M1[i][j]);
    printf("\n");
    }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            BC[i][j]=0;
            for(k=0;k<N;k++)
                BC[i][j]+=B[i][k]*C[k][j];
        }
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            M2[i][j]=0;
            for(k=0;k<N;k++)
                M2[i][j]+=A[i][k]*BC[k][j];
        }
    printf("\nResalt 2\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",M2[i][j]);
    printf("\n");
    }
}
