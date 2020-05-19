#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{
    int i,s,n,l=0;
    int *x=NULL;
    for(i=10;i<100;i++)
    {
        n=i;
        s=0;
        while(n!=0)
        {
            s+=n%10;
            n/=10;
        }
        if(i%s==0)
        {
            x=(int*)realloc(x,(l+1)*sizeof(int));
            x[l]=i;
            l++;
        }
    }
    printf("Numbers:\n");
    for(i=0;i<l;i++)
        printf("%d ",x[i]);
    free(x);
    getchar();
    getchar();
    return 0;
}
