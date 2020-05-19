#include <stdio.h>
#include <stdlib.h>
void prost(n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
        {
            i=0;
            break;
        }
    if(i==0)
        printf("%d is not simple number",n);
    else printf("%d is simple number",n);
}
int main()
{
    int n;
    printf("Input N: ");
    scanf("%d",&n);
    prost(n);
    getchar(); getchar();
    return 0;
}
