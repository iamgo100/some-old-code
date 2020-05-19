#include <stdio.h>
#include <stdlib.h>
void lis(int (*a)[3])
{
    int i,j,k,l;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            for(k=i;k<2;k++)
                for(l=j;l<3;l++)
                    if(a[i][j]==a[k][l] && !(i==k && j==l))
                        printf("%d ",a[k][l]);
}
int main()
{
    int i,j;
    int S[2][3]={{1,2,3},{0,1,2}},
        K[2][3]={{1,2,3},{0,1,2}};
    printf("Matrix S\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",S[i][j]);
    printf("\n");
    }
    printf("\nMatrix K\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",K[i][j]);
    printf("\n");
    }
    printf("The numbers of first array: ");
    lis(S);
    printf("\nThe numbers of second array: ");
    lis(K);
    getchar(); getchar();
    return 0;
}
