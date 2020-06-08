#include <iostream>
using namespace std;
//冒泡排序
int main(){
    int temp, i, j;
    int a[] = {34, 12, 55, 22, 78, 13};
    cout << "排序前：";
    for(int n : a){
        cout << n << " ";
    }
    cout << endl;
    int length = 6;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - 1 - i; j++)
        {
            if (a[j] < a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "排序后：";
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
}