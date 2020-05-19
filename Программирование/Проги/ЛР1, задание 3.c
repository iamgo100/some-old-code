#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float x,y,u;
    printf("Input 'x' and 'y'\n");
    scanf("%f%f",&x,&y);
    u=(1+pow(sin(x+y),2))/(2+abs(x-((2*pow(x,2))/(1+abs(sin(x+y))))));
    printf("u=%f",u);
    getchar();
}
