#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    float R,B,C,x,a;
    printf("Input 'a', 'B', 'C', 'x'\n");
    scanf("%f%f%f%f",&a,&B,&C,&x);
    R=((B*C)/12)*(6*pow(x,2)*pow(1-x/a,2)+pow(B,2)*pow(1-x/sin(a),2));
    printf("R=%f",R);
    getchar();
}
