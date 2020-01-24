//判断一个整数是否是回文数
#include <iostream>
using namespace std;
bool isPalindrome(int x)
{
    int s = x;
    long y = 0;
    if(x < 0)
        return false;
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
    cout <<isPalindrome(2147483647);
}

/*思路：
通过之前求整数反转的例子将反转后的整数与原数进行比较
相等则返回true，否则返回false
对于负数在函数开头直接判断，返回false
执行用时：20ms
内存消耗：8.1mb
*/