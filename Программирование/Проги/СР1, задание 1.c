#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float v0=200, a=1.0123, g=10, h=80, s;
    s=(v0*v0*sin(a)*cos(a)+v0*cos(a)*pow(v0*v0*sin(a)*sin(a)+2*g*h,0.5))/g;
    printf("s=%g",s);
    getch();
}
