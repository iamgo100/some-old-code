#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int sum(int *a,int n)
{
    if(n==0)
        return 0;
    else
        return sum(a,n-1)+a[n-1];
}
int main()
{
    int i,n,s=0;
    int *a;
    printf("Input size of array: ");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    printf("Input array\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Your array\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    s=sum(a,n);
    printf("\nSum of array is %d",s);
    getchar(); getchar();
    return 0;
}
