#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    printf("Input a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("'a' is max");
        else if(b>a && b>c)
            printf("'b' is max");
        else printf("'c' is max");
    getchar(); return 0;
}
