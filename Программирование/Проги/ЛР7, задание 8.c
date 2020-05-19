#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    float r,s,h;
    printf("Input N: ");
    scanf("%d",&N);
    switch(N)
    {
        case 1:
            printf("Input R to calculate the area of a circle: ");
            scanf("%f",&r);
            s=3.14*r*r;
            printf("S=%g",s);
            break;
        case 2:
            printf("Input R to calculate the volume of the ball: ");
            scanf("%f",&r);
            s=4./3.*3.14*r*r*r;
            printf("S=%g",s);
            break;
        case 3:
            printf("Input R and h to calculate the volume of the cylinder.\n");
            scanf("%f%f",&r,&h);
            s=3.14*r*r*h;
            printf("S=%g",s);
            break;
        case 4:
            printf("Input R to calculate the surface area of a sphere: ");
            scanf("%f",&r);
            s=4*3.14*r*r;
            printf("S=%g",s);
            break;
    }
    getchar(); getchar(); return 0;
}
