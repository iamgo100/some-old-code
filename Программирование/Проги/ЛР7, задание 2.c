#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,h;
    float s;
    printf("Input a,b,h\n");
    scanf("%d%d%d",&a,&b,&h);
    if (h==0)
        s=a*b;
    else
        s=0.5*h*(a+b);
    printf("s=%g",s);
    getchar(); return 0;
}
