#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Input the number: ");
    scanf("%d",&a);
    printf("Your number can be from ");
    if(a<2) printf("binary number system or ");
    if(a<8) printf("octal number system or ");
    if(a<10) printf("decimal number system\n");
    getchar(); getchar(); return 0;
}
