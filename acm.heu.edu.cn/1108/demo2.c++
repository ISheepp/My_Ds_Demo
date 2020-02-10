#include <iostream>
using namespace std;
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        int i;
        for (i = 1; i <= m * n; i++)
            if (i * m % n == 0)
            {
                cout << i * m << endl;
                break;
            }
    }
}