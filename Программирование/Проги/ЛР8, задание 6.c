#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
const int m=3,n=5;
float geom(int (*a)[n],int j)
{
    int i;
    float g=1;
    for(i=0;i<m;i++)
        g*=a[i][j];
    g=sqrt(g);
    return g;
}
int main()
{
    int D[m][n],i,j;
    float g;
    srand(time(NULL));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            D[i][j]=rand()%100;
    printf("Your matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",D[i][j]);
    printf("\n");
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        g=geom(D,j);
        printf("j=%d, geometric mean is %g\n",j,g);
    }
    getchar(); getchar();
    return 0;
}
