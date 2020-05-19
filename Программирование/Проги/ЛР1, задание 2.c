#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
int N,sum;
sum=0;
printf("Input the number: ");
scanf("%d",&N);
while(N!=0)
{
    sum+=N%10;
    N/=10;
}
printf("The sum of digits is: %d",sum);
getchar();
}
