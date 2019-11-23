//冒泡排序
#include <iostream>
using namespace std;
int main()
{
    int temp;
    int a[] = {21, 32, 45, 90, 56};
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (a[i] > a[i + 1])
            {
                // change
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] <<"\t" ;
    }
}