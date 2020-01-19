#include <iostream>
using namespace std;
//阶乘
int jiecheng(int n)
{
    if(n <= 1)
        return 1;
    else
    {
        return (n * jiecheng(n-1));
    }
    
}
int main()
{
    cout << jiecheng(3);
}