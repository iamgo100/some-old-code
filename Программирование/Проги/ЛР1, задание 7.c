#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float h,a,b,c,x;
    printf("Input 'a', 'b', 'c', 'x'\n");
    scanf("%f%f%f%f",&a,&b,&c,&x);
    h=-(x-a)/pow(pow(x,2)+pow(a,2),1/3)-(4*pow(pow(x*x+b*b,3),1/4))/(2+a+b+pow(pow(x-c,2),1/3));
    printf("h=%f",h);
    getchar();
}
