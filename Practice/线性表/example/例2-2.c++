//删除顺序表L中下标为p(0=<p<=length-1)的元素， 成功返回1， 否则返回0，并将被删除元素的值赋给e
#include <iostream>
#define maxSize 50
using namespace std;
int A[maxSize];
int length;
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
int deleteList(int A[], int p, int &e, int &length)
{
    if(p < 0 || p > length -1)
        return 0;
    int i;
    e = A[p];
    for(i = p; i < length-1; i++)
    {
        A[i] = A[i+1];
    }
    length--;
    return 1;
}
int main()
{
    int e;
    int test[10];
    createList(test, length);
    deleteList(test, 2, e, length);
    for (int i = 0; i < length; i++)
    {
        cout << test[i] << ",";
    }
    cout << endl;
    cout << length << endl;
    cout << e;
}
/*思路：
就是顺序表的删除操作
*/
