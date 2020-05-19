#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
int main ()
{
    int i,n,*x,Y,U=0,T,S=0,t,l;
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
    t=x[0];
    for(i=0;i<n;i++)
    {
        if(i%2==1)
            S+=1;
        if(abs(x[i])>t)
        {
            t=abs(x[i]);
            l=i;
        }
        if(x[i]<0)
            U+=x[i];
    }
    T=x[l];
    Y=(U+T)*(S+2);
    printf("Y=%d",Y);
    free(x);
    getchar(); getchar(); return 0;
}
