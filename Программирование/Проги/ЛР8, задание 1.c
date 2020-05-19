#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int sum(int *a,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        if(a[i]>0)
            s+=a[i];
    return s;
}
int main()
{
    int l,m,n,s=0,i;
    int *a,*b,*c;
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
    s=sum(a,l)+sum(b,m)+sum(c,n);
    printf("The total amount of positive elements is %d",s);
    free(a); free(b); free(c);
    getchar(); getchar();
    return 0;
}
