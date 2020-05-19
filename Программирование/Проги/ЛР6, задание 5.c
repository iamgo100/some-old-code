#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,j,n,m,l;
    int **x, *a, *b;
    printf("Input number of lines: ");
    scanf("%d",&n);
    printf("Input number of columns: ");
    scanf("%d",&m);
    printf("Input matrix\n");
    x=malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        x[i]=malloc(m*sizeof(int));
        for(j=0;j<m;j++)
        {
            printf("x[%d][%d]=",i,j);
            scanf("%d",&x[i][j]);
        }
    }
    printf("Input a-vector, size is %d\n",m);
    a=malloc(m*sizeof(int));
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("\nYour matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",x[i][j]);
    printf("\n");
    }
    printf("a-vector: ");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);
    b=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        b[i]=0;
        for(l=0;l<m;l++)
            b[i]+=x[i][l]*a[l];
    }
    printf("\nb=");
        for(i=0;i<n;i++)
            printf("%d ",b[i]);
    getchar(); return 0;
}
