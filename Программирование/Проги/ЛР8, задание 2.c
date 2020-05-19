#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int max(int *a,int n)
{
    int i,m;
    m=a[0];
    for(i=1;i<n;i++)
        if (a[i]>m)
            m=a[i];
    return m;
}
int main()
{
    int l,m,s=0,i;
    int *a,*b;
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
    printf("First array \n");
    for(i=0;i<l;i++)
        printf("%d ",a[i]);
    printf("\n");
    printf("Second array \n");
    for(i=0;i<m;i++)
        printf("%d ",b[i]);
    printf("\n");
    s=max(a,l)+max(b,m);
    printf("The amount of max elements is %d",s);
    free(a); free(b);
    getchar(); getchar();
    return 0;
}
