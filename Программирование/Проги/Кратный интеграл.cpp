#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
void glm();
void integ1();
void integ2();
int end();
float ff(float x,float y);
int main()
{
    setlocale(LC_ALL,"");
    glm();
    cin.get();
    return 0;
}
void glm()
{
    int gl;
    cout << "������� ����" << endl << endl << "1. ������������ ��������" << endl << "2. ������� ��������" << endl << "3. ����� �� ���������" <<endl << endl << "�������� ����� ����: ";
    cin >> gl;
    switch(gl)
    {
        case 1: integ1(); break;
        case 2: integ2(); break;
        case 3: end(); break;
    }
}
float ff(float x,float y)
{
    float r;
    r=sin(x+y); /*[0;1.57],[0;0.785]*/
    return r;
}
void integ2()
{
    float x,y,a,b,c,d,n,hx,hy,sumx=0,sumy=0,I,q;
    cout << endl << "������� ������� ������� ��������������" << endl << "������ ������ (a): ";
    cin >> a;
    cout << "������� ������ (b): ";
    cin >> b;
    cout << "������� ���������� ������� ��������������" << endl << "������ ������ (c): ";
    cin >> c;
    cout << "������� ������ (d): ";
    cin >> d;
    cout << "������� ���������� ���������: ";
    cin >> n;
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
    cout << "�������� �������� ���������: " << I << "\n\n";
    glm();
}
int end()
{
    cout << "\n������ ���������.\n";
    return 0;
}
void integ1()
{

}
