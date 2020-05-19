#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
    int a,sum;
    sum=0;
    a=1;
    while (a!=0)
    {
        printf("Input integer:\n");
        scanf("%d",&a);
        sum+=a;
    }
    printf("You entered a zero. Sum of integers is %d",sum);
    getchar();
}
