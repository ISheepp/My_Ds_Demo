/*已知一个顺序表L，其中的个元素递增有序排列，设计一个算法，插入一个元素x(x为int型)
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
    if(length > maxSize)
        return 0;
    cout << "输入顺序表长度:";
    cin >> length;
    for(int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    return 1;
}

int main(){
    int test[10];
    createList(test, length);
    for(int i = 0; i < length; i++)
    {
        cout << test[i] << ",";
    }
}
