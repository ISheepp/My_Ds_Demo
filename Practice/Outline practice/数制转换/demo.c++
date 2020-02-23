#include <bits/stdc++.h>
using namespace std;
long long n, x, m;
long long f(long long a, long long k)
{
    //快速幂求a^k
    if (k == 0)
        return 1;
    if (k == 1)
        return a % n;
    if (k % 2 == 0)
        return f((a % n) * (a % n) % n, k / 2) % n;
    else
        return (f((a % n) * (a % n) % n, k / 2) * (a % n)) % n;
}
int main()
{
    long long k;
    cin >> n >> m >> k >> x;
    cout << (x % n + ((m % n) * (f(10, k) % n) % n)) % n;
    return 0;
}

// https://www.cnblogs.com/gaozirong/p/10548843.html