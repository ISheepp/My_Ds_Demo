#include <iostream>
using namespace std;
bool panduan(int N, int K)
{
    if (N >= 1 && N <= 60 && K >= 1 && K <= N)
        return 1;
    else
        return 0;
}
long long int hanshu(int N, int K, long long int c)
{
    int jieguo = N - K;
    if (N - K == 0)
    {
        return 1;
    }
    while (jieguo != 1)
    {
        c = c * 2;
        jieguo--;
    }
    return c;
}
long long int jisuan(int N, int K)
{
    long long int c = 2;
    return hanshu(N, K, c);
}
int main()
{
    int T, N, K;
    cin >> T;
    while (T--)
    {
        for (int i = 1; i <= T;)
        {
            cin >> N >> K;
            if (panduan(N, K))
            {
                cout << jisuan(N, K) << endl;
                i++;
            }
        }
    }
}