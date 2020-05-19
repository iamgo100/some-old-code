#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int t,T1=686,T2=365;
    float x,y,r1=3389.5,r2=6371.11,w1,w2;
    w1=2*3.14/T1;
    w2=2*3.14/T2;
    for (t=1;t<=10;t++)
    {
       x=r1*cos(w1*t)-r2*cos(w2*t);
       y=r1*sin(w1*t)-r2*sin(w2*t);
       printf("x=%g, y=%g\n",x,y);
    }
}
