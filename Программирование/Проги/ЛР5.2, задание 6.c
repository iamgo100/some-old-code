#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=3;
main ()
{
    int i,j;
    float s=0,A[N][N];
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        {
            A[i][j]=0;
            printf("A[%d][%d]=",i,j);
            scanf("%f",&A[i][j]);
        }
    printf("\nYour matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%g ",A[i][j]);
    printf("\n");
    }

    for(i=0;i<N;i++)
    {
        s=0;
        for(j=0;j<N;j++)
            s+=A[i][j];
        A[i][0]=s/N;
    }

    printf("\nYour transformed matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%g ",A[i][j]);
    printf("\n");
    }
}
