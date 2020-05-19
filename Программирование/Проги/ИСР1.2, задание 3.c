#include <stdio.h>
#include <conio.h>
void main()
{
    int t=3;
    char b, m='R';
    printf("Input b:\n"); scanf("%c",&b);
    printf("m=%c\n",m);
    printf("Character code %c is %d\n",b,(int)b);
    printf("Character code %c is %d\n",m,m);
    printf("t=%d\n",t);
    printf("t+(int)b=%d\n",t+=(int)b);
    printf("Character with code %d is %c\n",t,(char)t);
    printf("Learn functions 'getchar' and 'putchar'\n");
    fflush(stdin);
    printf("Input the character: "); b=getchar();
    printf("It is your character: "); putchar(b);
    printf("\n");
    getch();
}
