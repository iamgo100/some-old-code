#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float E=0.000001,
    a=1,
    b=2,x0,x1,c;
    if ((pow(a,4)-18*a*a+6)*(4*pow(a,3)-36*a)>0)
        x0=a;
    else
        x0=b;
c=1;
while (c>E)
    {
        x1=x0-(pow(x0,4)-18*x0*x0+6)/(4*pow(x0,3)-36*x0);
        c=abs(x1-x0);
        x0=x1;
    }
x1=x0;
printf("%f",x1);

}
