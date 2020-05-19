#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int m0=1,t0=-20,t1=0,t2=100,l=335,c1=2060,c2=4187,L=2260,q1,q2,q3,q4,q;
    float m1,m2,m3,c11,c22,c33;
    q1=l*m0;
    q2=c1*m0*(t1-t0);
    q3=c2*m0*(t2-t1);
    q4=L*m0;
    q=q1+q2+q3+q4;
    c11=46*pow(10,6);
    c22=pow(10,7);
    c33=27*pow(10,6);
    m1=q/c11;
    m2=q/c22;
    m3=q/c33;
    printf("Q=%d\n",q);
    printf("the mass of kerosene is equal to %f\n",m1);
    printf("the mass of firewood is equal to %f\n",m2);
    printf("the mass of alcohol is equal to %f\n",m3);
}
