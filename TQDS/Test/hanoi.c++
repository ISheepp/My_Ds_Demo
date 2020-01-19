#include <iostream>
#include <math.h>
using namespace std;
//移动过程
void move(int n, char A, char B, char C)
{
    int time = 0;
    if(n == 1)
    {
        cout << A << "-->" << C << endl;
        time++;
    }
    else
    {
        move(n-1, A, C, B);
        cout << A << "-->" << C << endl;
        move(n-1, B, A, C);
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