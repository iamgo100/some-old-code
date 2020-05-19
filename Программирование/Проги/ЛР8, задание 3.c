#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
float geom(int *a,int n)
{
    int i;
    float g=1;
    for(i=1;i<n;i++)
        g*=a[i];
    g=sqrt(g);
    return g;
}
int main()
{
    int l,m,n,i;
    int *a,*b,*c;
    float g=1;
    printf("Input size of first array: ");
    scanf("%d",&l);
    a=malloc(l*sizeof(int));
    printf("Input array\n");
    for(i=0;i<l;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Input size of second array: ");
    scanf("%d",&m);
    b=malloc(m*sizeof(int));
    printf("Input array\n");
    for(i=0;i<m;i++)
    {
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    printf("Input size of third array: ");
    scanf("%d",&n);
    c=malloc(n*sizeof(int));
    printf("Input array\n");
    for(i=0;i<n;i++)
    {
        printf("c[%d]=",i);
        scanf("%d",&c[i]);
    }
    printf("First array \n");
    for(i=0;i<l;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("Second array \n");
    for(i=0;i<m;i++)
        printf("%d ",b[i]);
    printf("\n");
    printf("Third array \n");
    for(i=0;i<n;i++)
        printf("%d ",c[i]);
    printf("\n");
    g=geom(a,l);
    printf("Geometric mean of first array is %g\n",g);
    g=geom(b,m);
    printf("Geometric mean of second array is %g\n",g);
    g=geom(c,n);
    printf("Geometric mean of third array is %g\n",g);
    free(a); free(b); free(c);
    getchar(); getchar();
    return 0;
}
