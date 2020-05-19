#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
float f(float x,float y)
{
    float f;
    f=x+y;
    return f;
}
int main()
{
    setlocale(LC_ALL,"");
    int i;
    float a,b,h,n,xx,yy;
    float *x,*y;
    printf("¬ведите интервал дл€ вычислени€\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("¬ведите шаг: ");
    scanf("%f",&h);
    n=(b-a)/h;
    x=malloc(n*sizeof(float));
    y=malloc(n*sizeof(float));
    x[0]=a;
    y[0]=1;
    printf("|  x  |  y  |\n");
    printf(" ----- -----\n");
    printf("|%-5g|%-5g|\n",x[0],y[0]);
    printf(" ----- -----\n");
    for(i=1;i<=n;i++)
    {
        x[i]=x[i-1]+h;
        y[i]=y[i-1]+h*f(x[i],y[i]);
        printf("|%-5g|%-5g|\n",x[i],y[i]);
        printf(" ----- -----\n");
    }
    getchar();
    return 0;
}
