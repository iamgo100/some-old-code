#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,A,B,C;
    printf("Input AB,BC,AC\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        B=(a*a+b*b-c*c)/(2*a*b);
        C=(b*b+c*c-a*a)/(2*b*c);
        A=(a*a+c*c-b*b)/(2*a*c);
            if(A==0 || B==0 || C==0)
                printf("Rectangle triangle");
            else if(A<0 || B<0 || C<0)
                printf("Obtuse triangle");
            else printf("Acute triangle");
    }
    else printf("There is no triangle with such sides");
    getchar();
    getchar();
    return 0;
}
