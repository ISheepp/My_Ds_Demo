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
void merge(int a[], int b[], int c[], int m, int n)
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
}
int main()
{
    int test[10];
    createList(test, length);
    for(int i = 0; i < length; i++)
    {
        cout << test[i] << ",";
    }
}