#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,i,j,s;
    printf("Input the interval for searching\na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("The perfect numbers are ");
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=1;j<i;j++)
            if(i%j==0)
                s+=j;
        if(i==s)
            printf("%d ",i);
    }
    getchar(); getchar(); return 0;
}
