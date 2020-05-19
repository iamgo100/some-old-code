#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const float h=6.626,
            m=9.1,
            c=2.998,
            L=2.5,
            eB=1.602;
float speed(float A)
{
    float v,v1,v2;
    v1=2./m*h*c/L;
    v2=2./m*A*eB;
    v=pow(10,6)*sqrt(v1*1000-v2);
    return v;
}
int main()
{
    float Aag=4.3, Ani=5.04,v;
    v=speed(Aag);
    printf("Speed of Argentum's electron is %g\n",v);
    v=speed(Ani);
    printf("Speed of Nicel's electron is %g",v);
    getchar(); getchar();
    return 0;
}
