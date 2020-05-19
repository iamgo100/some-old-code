#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float a=0.4,b=1.2,h,sum=0,x,I;
    int n;
    printf("Input 'n': ");
    scanf("%d",&n);
    h=(b-a)/n;
    x=a;
    while (x<=b-h)
        {
            sum=sum+(cos(x*x+0.8)/(1.5+sin(0.6*x+0.5)));
            x=x+h;
        }
    I=h*sum;
    printf("I=%g",I);
}
