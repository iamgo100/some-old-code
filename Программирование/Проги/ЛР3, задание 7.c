#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int a,b,c,f,l,x,i;
    printf("Input a three-digit number: ");
    scanf("%d",&a);
    f=a/100;
    b=a/10;
    c=b%10;
    l=a%10;
    x=l+c+f;
    i=x;
    if (i<=10)
    {
        printf("Sum is %d",i);
    }
    else
    {
        while (i>10)
        {
            printf("Sum is more then 10. Input the new number: ");
            scanf("%d",&a);
            f=a/100;
            b=a/10;
            c=b%10;
            l=a%10;
            x=l+c+f;
            i=x;
        }
    printf("Sum is %d",i);
    }
}
