#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int m=3,n=3;
int main ()
{
    int i,j,k,a[m][n],at[n][m],b[m][m];
    /*Ввод матрицы (М-строки, N-столбцы)*/
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    /*Вывод матрицы*/
    printf("\nYour matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
    printf("\n");
    }
    /*Транспонирование матрицы*/
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            at[i][j]=0;
            at[i][j]=a[j][i];
        }
    /*Ее вывод*/
    printf("\nYour transposed matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",at[i][j]);
    printf("\n");
    }
    /*Умножение матриц*/
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
        {
            b[i][j]=0;
            for(k=0;k<n;k++)
                b[i][j]+=a[i][k]*at[k][j];
        }
    /*Вывод результата*/
    printf("\nResalt\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            printf("%d ",b[i][j]);
    printf("\n");
    }
    getchar(); getchar();
    return 0;
}
