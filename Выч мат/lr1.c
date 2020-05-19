#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float f(float x);
float df(float x);
float ff(float x,float y);
float trapf(float n,float a,float b);
void glm();
void integ1();
void integ2();
void shag1();
void shag2();
void left();
void right();
void trap();
void parab();
void metod1();
void metod2();
int end();

int main()
{
    setlocale(LC_ALL,"");
    glm();
    getchar();
    return 0;
}

float f(float x)
{
    float y;
    /*y=exp((-1)*pow(x,2)); /*[0;1]*/
    y=pow(x,5); /*[0.5;1.5]*/
    return y;
}
float ff(float x,float y)
{
    float r;
    r=sin(x+y); /*[0;1.57],[0;0.785]*/
    return r;
}
float df(float x)
{
    float h,dy;
    h=pow(10,-6);
    dy=(f(x+h)-f(x))/h;
    return dy;
}
float trapf(float n,float a,float b)
{
    float h,sum=0,x,I,fa,fb,fx;
    h=(b-a)/n;
    fa=f(a);
    fb=f(b);
    fx=(fa+fb)/2;
    x=a+h;
    while (x<=b-h)
        {
        sum=sum+f(x);
        x=x+h;
        }
    I=h*(fx+sum);
    return I;
}
void glm()
{
    int gl;
    printf("������� ����\n\n1. ������������ ��������\n2. ������� ��������\n3. ����� �� ���������\n\n�������� ����� ����: ");
    scanf("%d",&gl);
    switch(gl)
    {
        case 1: integ1(); break;
        case 2: integ2(); break;
        case 3: end(); break;
    }
}
void integ1()
{
    int gl;
    printf("\n������������ ��������\n\n1. ������ � ���������� �����\n2. ������ � ���������� �����\n3. ��������� � ������� ����\n\n�������� ����� ����: ");
    scanf("%d",&gl);
    switch(gl)
    {
        case 1: shag1(); break;
        case 2: shag2(); break;
        case 3: glm(); break;
    }
}
void integ2()
{
    float x,y,a,b,c,d,n,hx,hy,sumx=0,sumy=0,I,q;
    printf("\n������� ������� ������� ��������������\n������ ������ (a): ");
    scanf("%f",&a);
    printf("������� ������ (b): ");
    scanf("%f",&b);
    printf("������� ���������� ������� ��������������\n������ ������ (c): ");
    scanf("%f",&c);
    printf("������� ������ (d): ");
    scanf("%f",&d);
    printf("������� ���������� ���������: ");
    scanf("%f",&n);
    hx=(b-a)/n;
    hy=(d-c)/n;
    x=a;
    while (x<=b)
        {
        sumy=0;
        y=c;
        while(y<=d)
        {
            if(x==a || x==b)
                if(y==c || y==d)
                    q=0.25;
                else q=0.5;
            else if(y==c || y==d)
                    q=0.5;
                else q=1;
            sumy+=q*ff(x,y);
            y+=hy;
        }
        sumx+=sumy;
        x+=hx;
        }
    I=hx*hy*sumx;
    printf("�������� �������� ���������: %.8f\n\n",I);
    glm();
}
void shag1()
{
    int sh;
    printf("\n������ � ���������� �����\n\n1. ����� ����� ������ ���������������\n2. ����� ������ ������ ���������������\n3. ����� ��������\n4. ����� �������\n5. ��������� � ������� ����\n\n�������� ����� ����: ");
    scanf("%d",&sh);
    switch(sh)
    {
        case 1: left(); break;
        case 2: right(); break;
        case 3: trap(); break;
        case 4: parab(); break;
        case 5: glm(); break;
    }
}
void shag2()
{
    int sh;
    printf("\n������ � ���������� �����\n\n1. ����� 1\n2. ����� 2\n3. ��������� � ������� ����\n\n�������� ����� ����: ");
    scanf("%d",&sh);
    switch(sh)
    {
        case 1: metod1(); break;
        case 2: metod2(); break;
        case 3: glm(); break;
    }
}
void left()
{
    float h,sum=0,x,I,M1,M2,M,r,a,b,n;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� ���������� ���������: ");
    scanf("%f",&n);
    M1=fabs(df(a));
    M2=fabs(df(b));
    if (M1>M2)
        M=M1;
    else M=M2;
    r=fabs((M*pow(b-a,2))/(2*n));
    h=(b-a)/n;
    x=a;
    while (x<=b-h)
    {
        sum=sum+f(x);
        x=x+h;
    }
    I=h*sum;
    printf("�������� ���������: %.8f\n�������� ����������� �����: %g\n\n",I,r);
    glm();
}
void right()
{
    float n,h,sum=0,x,I,M1,M2,M,r,a,b;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� ���������� ���������: ");
    scanf("%f",&n);
    M1=fabs(df(a));
    M2=fabs(df(b));
    if (M1>M2)
        M=M1;
    else M=M2;
    r=fabs((M*pow(b-a,2))/(2*n));
    h=(b-a)/n;
    x=a+h;
    while (x<=b)
    {
        sum=sum+f(x);
        x=x+h;
    }
    I=h*sum;
    printf("�������� ���������: %.8f\n�������� ����������� �����: %g\n\n",I,r);
    glm();
}
void trap()
{
    float n,h,sum=0,x,I,fa,fb,fx,da,db,M1,M2,M,r,a,b;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� ���������� ���������: ");
    scanf("%f",&n);
    da=df(a);
    M1=fabs(df(da));
    db=df(b);
    M2=fabs(df(db));
    if (M1>M2)
        M=M1;
    else M=M2;
    r=sqrt(fabs((M*pow(b-a,3))/(12*n)));
    h=(b-a)/n;
    fa=f(a);
    fb=f(b);
    fx=(fa+fb)/2;
    x=a+h;
    while (x<=b-h)
        {
        sum=sum+f(x);
        x=x+h;
        }
    I=h*(fx+sum);
    printf("�������� ���������: %.8f\n�������� ����������� �����: %g\n\n",I,r);
    glm();
}
void parab()
{
    float h,sum1=0,sum2=0,x,I,fa,fb,n,da,db,M,r,a,b;
    int i;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� ���������� ���������: ");
    scanf("%f",&n);
    da=f(a);
    db=f(b);
    for (i=0;i<4;i++)
    {
        da=df(da);
        db=df(db);
    }
    if (fabs(da)>fabs(db))
        M=da;
    else M=db;
    r=sqrt(sqrt(fabs((pow(b-a,5)*M)/(2880*n))));
    h=(b-a)/(2*n);
    fa=f(a);
    fb=f(b);
    for (i=1;i<=(2*n-1);i+=2)
    {
        x=a+i*h;
        sum1=sum1+f(x);
    }
    for (i=2;i<=(2*n-2);i+=2)
    {
        x=a+i*h;
        sum2=sum2+f(x);
    }
    I=(h/3)*(fa+fb+4*sum1+2*sum2);
    printf("�������� ���������: %.8f\n�������� ����������� �����: %g\n\n",I,r);
    glm();
}
void metod1()
{
    float n=2,In,I2n,e,a,b,k=1;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� �������� ��� ���������� ���������: ");
    scanf("%f",&e);
    In=trapf(n,a,b);
    I2n=trapf(2*n,a,b);
    while (fabs(I2n-In)>e)
    {
        n*=2;
        In=trapf(n,a,b);
        I2n=trapf(2*n,a,b);
        k++;
    }
    printf("�������� ���������: %.8f\n���������� ��������: %g\n\n",I2n,k);
    glm();
}
void metod2()
{
    float a,b,e,n=2,In,I2n,fa,fb,fx,hv,hs,x,sum=0,k=1;
    printf("\n������� ������� ��������������\n������ ������: ");
    scanf("%f",&a);
    printf("������� ������: ");
    scanf("%f",&b);
    printf("������� �������� ��� ���������� ���������: ");
    scanf("%f",&e);
    fa=f(a);
    fb=f(b);
    fx=(fa+fb)/2;
    hv=(b-a)/n;
    x=a+hv;
    while (x<=b-hv)
        {
        sum+=f(x);
        x+=hv;
        }
    In=hv*(fx+sum);
    hs=hv/2;
    x=a+hs;
    while (x<=b-hs)
        {
        sum+=f(x);
        x+=hv;
        }
    I2n=hs*(fx+sum);
    while (fabs(I2n-In)>e)
    {
        hv=hs;
        In=I2n;
        hs=hv/2;
        x=a+hs;
        while (x<=b-hs)
            {
            sum+=f(x);
            x+=hv;
            }
        I2n=hs*(fx+sum);
        k++;
    }
    printf("�������� ���������: %.8f\n���������� ��������: %g\n\n",I2n,k);
    glm();
}
int end()
{
    printf("\n������ ���������.\n");
    return 0;
}
