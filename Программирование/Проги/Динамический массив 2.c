#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
int main ()
{
    int i=0,n=0,*x=NULL;
    char c="n";
    printf("Input array\n");
    while(c!='y')
    {
        x=(int*)realloc(x,(i+1)*sizeof(int));
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
        i++; n++;
        printf("Is array over? Write y/n: ");
        getchar();
        c=getchar();
    }
    printf("Your array \n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    free(x);
    getchar(); getchar(); return 0;
}
