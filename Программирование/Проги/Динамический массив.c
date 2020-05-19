#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,n,*x;
    printf("Input n: ");
    scanf("%d",&n);
    x=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
    }
    printf("Your array \n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    free(x);
    getchar(); getchar(); return 0;
}
