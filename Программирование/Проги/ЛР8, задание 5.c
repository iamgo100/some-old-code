#include <stdio.h>
#include <stdlib.h>
int sum(int (*a)[5],int i)
{
    int j,s=0;
    for(j=0;j<5;j++)
        if(a[i][j]>0)
            s+=a[i][j];
    return s;
}
int main()
{
    int D[2][5]={{-1,6,3,0,-9},{-2,-5,1,4,8}};
    int j,i,l=100000000;
    printf("Matrix D\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
            printf("%d ",D[i][j]);
    printf("\n");
    }
    printf("\n");
    for(i=0;i<2;i++)
        {
            j=0;
            j=sum(D,i);
            if (j<l)
                l=j;
        }
    printf("The minimal sum is %d",l);
    getchar(); getchar();
    return 0;
}
