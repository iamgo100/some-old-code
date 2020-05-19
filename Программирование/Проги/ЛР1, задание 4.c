#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float r,z,s,x;
    printf("Input 'z', 's', 'x'\n");
    scanf("%f%f%f",&z,&s,&x);
    r=(2,71*pow(10,6)*z*pow(tan(log(s)*x),2))/(exp(-s*tan(x))+abs(z*x));
    printf("r=%f",r);
    getchar();
}
