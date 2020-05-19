#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int N=3;
main ()
{
    int i,j,X[N][N];
    for(j=0;j<N;j++)
        for(i=0;i<N;i++)
        {
            printf("X[%d][%d]=",i,j);
            scanf("%d",&X[i][j]);
        }
    printf("\nYour matrix\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",X[i][j]);
    printf("\n");
    }
}
