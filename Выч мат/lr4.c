#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void expx();
void sinx();
void lnx();
void arctgx();
void glm();
void end();
int main()
{
    setlocale(LC_ALL,"");
    glm();
    getchar();
    return 0;
}
void glm()
{
    int i;
    printf("\nГлавное меню\n\nВычисление элементарных функций:\n1. exp(x)\n2. sin(x)\n3. ln(1+x)\n4. arctg(x)\n5. Выйти из программы\n\nВыберите пункт меню: ");
    scanf("%d",&i);
    printf("\n");
    switch(i)
    {
        case 1: expx(); break;
        case 2: sinx(); break;
        case 3: lnx(); break;
        case 4: arctgx(); break;
        case 5: end(); break;
    }
}
void expx()
{
    const int n=8;
    double a[]={0.9999998,1,0.5000063,0.1666674,0.0416350,0.008298,0.0014393,0.000204};
    int i=0;
    double x=1,p=0.5,y=0;
    for(i=0;i<n;i++)
    {
        y+=a[i]*x;
        x*=p;
    }
    printf("Результат: %f\n",y);
    glm();
}
void sinx()
{
    const int n=5;
    double a[]={1.000000002,-0.166666589,0.008333075,-0.000198107,0.000002608};
    int i=0;
    double x,p,y=0;
    x=M_PI/6;
    for(i=0;i<n;i++)
    {
        p=2*i+1;
        y+=a[i]*pow(x,p);
    }
    printf("Результат: %g\n",y);
    glm();
}
void lnx()
{
    const float e=0.000001;
    const float x=0.5;
    float y1=0,y2=0,i=1;
    do
    {
        y1=y2;
        y2+=pow(-1,i+1)*pow(x,i)/i;
        i++;
    }
    while(fabs(y1-y2)>e);
    printf("Результат: %g\n",y2);
    glm();
}
void arctgx()
{
    const float e=0.000001;
    float x,y1=0,y2=0,i=1;
    x=M_PI/6;
    do
    {
        y1=y2;
        y2+=(pow(-1,i-1)*pow(x,2*i-1))/(2*i-1);
        i++;
    }
    while(fabs(y1-y2)>e);
    printf("Результат: %g\n",y2);
    glm();
}
void end()
{
    printf("Работа завершена.\n");
}
