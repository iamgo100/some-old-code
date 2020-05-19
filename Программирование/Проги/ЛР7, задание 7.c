#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Input number of corners: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("There is no such figure"); break;
        case 2: printf("There is no such figure"); break;
        case 3: printf("This is a triangle"); break;
        case 4: printf("This is a quadrilateral"); break;
        case 5: printf("This is a pentagon"); break;
        case 6: printf("This is a hexagon"); break;
        default: printf("This is a polygon"); break;
    }
    getchar();
    getchar();
    return 0;
}
