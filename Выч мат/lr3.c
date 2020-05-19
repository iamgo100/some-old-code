#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float f(float x,float y);
void glm();
void eyler();
void runge();
void sist();
void vpor();
void end();
int main()
{
    setlocale(LC_ALL,"");
    glm();
    getchar();
    return 0;
}
float f(float x,float y)
{
    float f;
    f=y*(1-x);
    return f;
}
void glm()
{
    int i;
    printf("\nГлавное меню\n\n1. Метод Эйлера\n2. Метод Рунге\n3. Системы дифференциальных уравнений\n4. Дифференциальные уравнения второго порядка\n5. Выйти из программы\n\nВыберите пункт меню: ");
    scanf("%d",&i);
    printf("\n");
    switch(i)
    {
        case 1: eyler(); break;
        case 2: runge(); break;
        case 3: sist(); break;
        case 4: vpor(); break;
        case 5: end(); break;
    }
}
void eyler()
{
    float a,b,x,y,h;
    printf("Введите интервал для вычисления\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("Введите шаг: ");
    scanf("%f",&h);
    y=1;
    x=a;
    while(x<b)
    {
        printf("x=%g, y=%g\n",x,y);
        y+=h*f(x,y);
        x+=h;
    }
    glm();
}
void runge()
{
    float a,b,x,y,h,k1,k2,k3,k4,F;
    printf("Введите интервал для вычисления\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("Введите шаг: ");
    scanf("%f",&h);
    y=1;
    x=a;
    while(x<b)
    {
        printf("x=%g, y=%g\n",x,y);
        k1=h*f(x,y);
        k2=h*f(x+h/2,y+k1/2);
        k3=h*f(x+h/2,y+k2/2);
        k4=h*f(x+h,y+k3);
        F=(k1+2*k2+2*k3+k4)/6;
        y+=F;
        x+=h;
    }
    glm();
}
void sist()
{
    float a,b,t,x,y,z,x0,y0,z0,h;
    printf("Введите интервал для вычисления\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("Введите шаг: ");
    scanf("%f",&h);
    t=a;
    x=2;
    y=1;
    z=1;
    while(t<b)
    {
        printf("t=%g, x=%g, y=%g, z=%g\n",t,x,y,z);
        x0=x;
        y0=y;
        z0=z;
        x+=h*(-2*x0+5*z0);
        y+=h*(sin(t-1)*x0-y0+3*z0);
        z+=h*(-x0+2*z0);
        t+=h;
    }
    glm();
}
void vpor()
{
    float a,b,x,y,y0,y1,y2,z,h;
    printf("Введите интервал для вычисления\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("Введите шаг: ");
    scanf("%f",&h);
    x=a;
    y=0.77;
    y1=-0.44;
    z=y1;
    while(x<b)
    {
        printf("x=%g, y=%g, z=%g\n",x,y,z);
        y0=y;
        y+=h*z;
        z-=h*(z/x+y0);
        x+=h;
    }
    glm();
}
void end()
{
    printf("Работа завершена.\n");
}
