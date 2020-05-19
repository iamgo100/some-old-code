#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,n,*x;
    float T=0,R=0,Q=0,S=1;
    printf("Input n: ");
    scanf("%d",&n);
    x=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("x[%d]=",i);
        scanf("%d",&x[i]);
    }
    printf("Your array \n");
    for(i=0;i<n;i++)
        printf("%d ",x[i]);
    printf("\n");
    for(i=0;i<n;i++)
        if(x[i]<0)
        {
            R+=x[i];
            Q=x[i];
        }
        else
            S*=x[i];
    T=(R+Q+S)/(R*Q*S+2);
    printf("T=%g",T);
    free(x);
    getchar(); getchar(); return 0;
}
