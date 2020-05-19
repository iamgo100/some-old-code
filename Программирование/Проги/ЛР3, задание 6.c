#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int k,n;
    float s,x,y;
    printf("Input 'n' and 'x':\n");
    scanf("%d%f",&n,&x);
    s=0;
    for (k=3;k<=n;k++)
    {
        s=s+(2*pow(x,3)*k+cos(k)*pow(x+1,0.5)-2.3/k);
    }
    y=6.3*x-4*s;
    printf("y=%g",y);
}
