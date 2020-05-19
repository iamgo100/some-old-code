#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int n=4;
int main ()
{
    int i,x[n];
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
    }
    printf("Your array \n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    getchar(); getchar(); return 0;
}
