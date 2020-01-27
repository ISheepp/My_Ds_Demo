#include <iostream>
#include <math.h>
using namespace std;
//移动过程
void move(int n, char first, char middle, char end)
{
    if(n == 1)
    {
        cout << first << "-->" << end << endl;
    }
    else
    {
        move(n-1, first, end, middle);
        cout << first << "-->" << end << endl;  //相当于move(1,first, middle, end)
        move(n-1, middle, first, end);
    }
}
//移动步数
int time(int n)
{
    int step = 0;
    if(n == 1)
        return step + 1;
    else
    {
        step = pow(2, n) - 1;
    }
    return step;
}
int main()
{
    int n;
    cout << "输入汉诺塔层数：" ;
    cin >> n;
    move(n, 'A', 'B', 'C');
    cout << "移动次数:" << time(n) << endl;
}