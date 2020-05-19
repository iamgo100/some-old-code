#include<stdio.h>
#include<stdlib.h>
#include<math.h>
const int n=4;
main ()
{
    int i,a[n],min,max;
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Your array\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if (a[i]<min)
            min=a[i];
        if (a[i]>max)
            max=a[i];
    }
    printf("\nmin=%d\nmax=%d\n",min,max);
    getchar();
}
