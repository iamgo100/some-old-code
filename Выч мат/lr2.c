#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float f(float x)
{
    float y;
    y=x-sin(x)-1;
    return y;
}
float df(float x)
{
    float h,dy;
    h=pow(10,-6);
    dy=(f(x+h)-f(x))/h;
    return dy;
}
int main()
{
    setlocale(LC_ALL,"");
    float e,a,b,x0,x1,c,k,fx,dfx;
    printf("Введите интервал для вычисления\nНижний предел: ");
    scanf("%f",&a);
    printf("Верхний предел: ");
    scanf("%f",&b);
    printf("Введите точность вычисления: ");
    scanf("%f",&e);
    fx=f(a);
    dfx=df(df(f(a)));
    if (fx*dfx>0)
        x0=a;
    else
        x0=b;
    c=e+1;
    k=0;
    while (c>e)
        {
            fx=f(x0);
            dfx=df(fx);
            x1=x0-fx/dfx;
            c=fabs(x1-x0);
            x0=x1;
            k++;
        }
    x1=x0;
    printf("x=%g\nКоличество иттераций: %g",x1,k);
}
