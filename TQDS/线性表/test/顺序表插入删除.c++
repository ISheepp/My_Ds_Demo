//---顺序表的插入和删除
//---修改时间：1-18
//---Yang

#include <iostream>
#define maxSize 20
using namespace std;

int sqList[maxSize] = {1, 2, 3, 4, 5, 6 ,7, 8, 9};
int length = 9;
int e = 3;
//插入
int insertElem(int sqList[], int &length, int p, int e)
{
    if(p < 0 || p > length || length == maxSize)
        return 0;
    for(int i = length - 1; i >= p; i--)
        sqList[i+1] = sqList[i];
    sqList[p] = e;
    length++;
    return 1;   
}
//删除
int deleteElem(int sqList[], int &length, int p, int &e)
{
    if(p < 0 || p > length - 1)
        return 0;
    e = sqList[p];
    for(int i = p; i < length - 1; i++)
        sqList[i] = sqList[i+1];
    length--;
    return 1;
}
//测试
int main()
{
    deleteElem(sqList, length, 3, e);
    for(int i = 0; i < length; i++)
        cout << sqList[i] << ',';
}