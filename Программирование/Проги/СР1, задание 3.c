#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int x,p;
    printf("Input 'x': ");
    scanf("%d",&x);
    p=2*pow(x,4)-3*pow(x,3)+2*pow(x,2)+x+3;
    printf("Polynomial is %d",p);
}
