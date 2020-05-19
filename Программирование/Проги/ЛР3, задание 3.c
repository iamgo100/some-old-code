#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    int m,F1,F2,F3,i;
    printf("Input 'm': ");
    scanf("%d",&m);
    switch(m)
    {
        case '1': printf("1"); break;
        case '2': printf("1, 1"); break;
    }
    if (m>2)
    {
        printf("1, 1");
        F1=1;
        F2=1;
        F3=0;
        for (i=3;i<=1000;i++)
        {
            F3=F1+F2;
            if (F3>m) break;
            printf(", %d",F3);
            F1=F2;
            F2=F3;
        }
    }
}
