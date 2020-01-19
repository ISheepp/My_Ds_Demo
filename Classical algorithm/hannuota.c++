#include <iostream>
using namespace std;
//目标是A->C
void hanoi(int N ,char A , char B ,char C)
{
    if(N == 1)
        cout << A << "-->" << C << endl ;
    else
    {
        hanoi(N-1 , A , C , B) ;
        cout << A << "-->" << C << endl ; //==hanoi(1,a,b,c)
        hanoi(N-1 , B , A , C) ;
    }
}
int main()
{
    int n;
    cout << "输入盘子的个数:";
    cin >> n;
    cout << "移动过程如下" << endl;
    cout << "-----------" << endl;
    hanoi(n, 'A' , 'B' , 'C') ;
    return 0;
}