#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>
int main ()
{
    int i=0,j=0,n=0,m=0,l=0,*x=NULL,*y=NULL,*z=NULL;
    char c="n";
    printf("Input first array\n");
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
    c="n";
    printf("Input second array\n");
    while(c!='y')
    {
        y=(int*)realloc(y,(j+1)*sizeof(int));
        printf("y[%d]=",j);
        scanf("%d",&y[j]);
        j++; m++;
        printf("Is array over? Write y/n: ");
        getchar();
        c=getchar();
    }
    printf("First array \n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    printf("Second array \n");
    for(j=0;j<m;j++)
        printf("%d ",y[j]);
    printf("\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(x[i]==y[j])
            {
                z=(int*)realloc(z,(l+1)*sizeof(int));
                z[l]=x[i]; l++;
            }
    printf("Intersection of two introduced arrays\n");
    for(i=0;i<l;i++)
        printf("%d ",z[i]);
    free(x); free(y);
    getchar(); getchar(); return 0;
}
