#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
    float s=2.2,x=0.12,a=3.6,z;
    z=x*s/2-(a*a/2)*log10(abs(x*x-s*a));
    printf("z=%g",z);
}
