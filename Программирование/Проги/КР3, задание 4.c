#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
    int i,a;
    a=1;
    for (i=1;i<=20;i++)
    {
        a*=2;
        printf("2 to %d degrees is %d\n",i,a);
    }
    getchar();
}
