#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,j,n,m,l;
    int **x;
    printf("Input number of lines: ");
    scanf("%d",&n);
    printf("Input number of columns: ");
    scanf("%d",&m);
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
    printf("\nYour matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",x[i][j]);
    printf("\n");
    }
    printf("What number of line you want to delete is?\n");
    scanf("%d",&l);
    if(l==n)
        free(x[n]);
    else
        for(i=l-1;i<n-1;i++)
            for(j=0;j<m;j++)
                x[i][j]=x[i+1][j];
    free(x[n]);
    n-=1;
    printf("\nYour new matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",x[i][j]);
    printf("\n");
    }
    for(i=0;i<n;i++)
        free(x[i]);
    free(x);
    getchar(); getchar(); return 0;
}
