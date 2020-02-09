#include <iostream>
#include <string>
using namespace std;
string a;
int b;
int main()
{
    while (cin >> a, a != "0")
    {
        b = 0;
        for (int i = 0; i < a.length(); i++)
        {
            b += a[i] - '0';        //由ascii码可得数值字符串需要减去0的ascii码才能得到数值
            if (b >= 10)
                b = b / 10 + b % 10;
        }
        cout << b << endl;
    }
}