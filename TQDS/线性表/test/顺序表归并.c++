#include <iostream>
using namespace std;
const int maxSize = 50;
int A[maxSize];
int length;
int createList(int A[], int &length)
{
    cout << "输入顺序表长度:";
    cin >> length;
    if(length < 0 || length >maxSize)
        return 0;
    for(int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    return 1;
}
//递增
int merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0;
    int k = 0;
    while(i < m && j < n){
        if(a[i] < b[j])
            c[k++] = a[i++]; //相当于c[k] = a[i]; k++; i++;
        else
            c[k++] = b[j++];
    }
    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
    return m+n;
}
//递减
void Nizhi(int c[], int length)
{
    int i = 0, j = length-1;
    int temp;
    for(i;i < j; i++,j--)
    {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
    }
}
int main()
{
    // int test[5] = {1, 2, 3, 4, 5};
    // Nizhi(test, 5);
    // for(int i = 0; i < 5; i++)
    // {
    //     cout << test[i] << ",";
    // }
    int a[4];
    int b[3];
    int c[7];
    createList(a, length);
    createList(b, length);
    // merge(a, b, c ,4, 3);
    int clength = merge(a, b, c ,4, 3);
    Nizhi(c, clength);
    for(int i = 0; i < clength; i++)
    {
        cout << c[i] << ",";
    }
    // cout << clength;
}