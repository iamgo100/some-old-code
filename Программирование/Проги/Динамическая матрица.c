#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,j,n,m;
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
    getchar(); return 0;
}
