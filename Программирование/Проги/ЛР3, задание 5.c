#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int n,i;
    float x,p,z,p0;
    printf("Input 'n' and 'x':\n");
    scanf("%d%f",&n,&x);
    p0=1+(10+x)/x;
    p=p0;
    for (i=2;i<=n;i++)
    {
        p=p*pow(p0,1./i);
    }
    z=-cos(0.1*p);
    printf("z=%f",z);
}
