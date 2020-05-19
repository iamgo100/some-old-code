#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const l=4,n=5;
int min(int (*a)[n], int i)
{
    int m,j;
    m=a[i][0];
    for(j=1;j<n;j++)
        if (a[i][j]<m)
            m=a[i][j];
    return m;
}
int main()
{
    int F[l][n],i,j,m;
    srand(time(NULL));
    for(i=0;i<l;i++)
        for(j=0;j<n;j++)
            F[i][j]=rand()%100;
    printf("Matrix F\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",F[i][j]);
    printf("\n");
    }
    printf("\n");
    for(i=0;i<l;i++)
        {
            m=min(F,i);
            printf("i=%d, min=%d\n",i,m);
        }
    getchar(); getchar();
    return 0;
}
