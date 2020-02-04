#include <iostream>
using namespace std;
void f(int a[], int n, int k)
{
    int *bk = new int[n];
    int i, m;
    for(i = 0; i< n; i++)
        bk[i] = a[i];
    m = k % n;
    for(i = 0; i < n; i++)
    {
        if(i + m < n)
            a[i+m] = bk[i];
        else
            a[i+m-n] = bk[i];
    }
    delete []bk;
}
int main()
{
    int t[10] = {19,28,37,46,55,64,73,12,9,1};
    f(t, 10, 17);
    for(int i = 0; i < 10; i++)
    {
        cout << t[i] << ",";
    }
}
//1.函数功能：将前n-k%n个数按照原顺序移到最后