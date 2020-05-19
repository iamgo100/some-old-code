#include <iostream>
using namespace std;
const int n = 5;
int main()
{
    int mas[n];
    int i,j,k,l,a,max1,max2;
    bool f;
    /*Ввод массива*/
    for (i=0;i<n;i++)
        cin >> mas[i];
    /*Сортировка массива*/
    k=0; l=0;
    for (i=0;i<n-1;i++)
    {
        max1=mas[i];
        l=i+1;
        max2=mas[l];
        for (k=i+1;k<n;k++)
            if (mas[k]>max1)
            {
                max2=mas[k];
                l=k;
            }
        if (max2>max1)
        {
            mas[l]=mas[i];
            mas[i]=max2;
        }
        j=0;
        f=true;
        while (j<n && f==true)
            if (mas[j]<mas[j+1])
                f=false;
            else j++;
        if (f==true)
            break;
    }
    cout << endl;
    /*Вывод массива*/
    for (i=0;i<n;i++)
        cout << mas[i];

    cin.get();
    return 0;
}
