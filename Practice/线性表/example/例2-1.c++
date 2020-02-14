/*例2-1：已知一个顺序表L，其中的个元素递增有序排列，设计一个算法，插入一个元素x(x为int型)
后保持该顺序表仍然递增有序(假设插入操作总能成功)
*/
#include <iostream>
using namespace std;
const int maxSize = 50;
int A[maxSize];
int length;
//建表
int createList(int A[], int &length)
{
    if (length > maxSize)
        return 0;
    cout << "输入顺序表长度:";
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    return 1;
}
int findElm(int A[], int e, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (e < A[i])
        {
            return i;
        }
    }
    return i;
}
void insertList(int A[], int e, int &length)
{
    int i;
    int p = findElm(A, e, length);
    for (i = length - 1; i >= p; i--)
    {
        A[i + 1] = A[i];
    }
    A[p] = e;
    length++;
}
int main()
{
    int test[10];
    createList(test, length);
    insertList(test, 2, length);
    for (int i = 0; i < length; i++)
    {
        cout << test[i] << ",";
    }
    cout << endl;
    cout << length;
    system("pause");
}
/*
思路：
1. 先找到插入元素的位置
2. 将插入元素的位置往后移一位(先移动最后面的元素以防元素覆盖)
*/