#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float x,y;
    printf("Input 'x' and first 'y'\n");
    scanf("%f%f",&x,&y);
    y=-2*sqrt(pow(y,2)+(4*pow(x,2))/3)-pow(cos(x),4)/x;
    printf("y=%f",y);
    getchar();
}
