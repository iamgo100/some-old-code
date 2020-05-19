#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,j,n;
    int **x;
    printf("Input size of matrix: ");
    scanf("%d",&n);
    x=malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    {
        x[i]=malloc(n*sizeof(int));
        for(j=0;j<n;j++)
            if((i+j)%2==0)
                x[i][j]=0;
            else x[i][j]=1;
    }
    printf("\nYour matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",x[i][j]);
    printf("\n");
    }
    getchar(); return 0;
}
