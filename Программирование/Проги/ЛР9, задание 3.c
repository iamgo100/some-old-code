#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int K(int n)
{
    if(n<10)
        return 1;
    else
        return K(n/10)+1;
}
int main()
{
    int n,k;
    printf("Input n: ");
    scanf("%d",&n);
    k=K(n);
    printf("%d consists of %d digits",n,k);
    getchar(); getchar();
    return 0;
}
