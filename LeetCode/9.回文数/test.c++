//判断一个整数是否是回文数
#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    int s = x;
    int y = 0;
    while (x)
    {
        y *= 10;
        y += x % 10;
        x /= 10;
    }
    if (y == s)
        return true;
    else
        return false;
}
int main()
{
    cout <<isPalindrome(-121);
}