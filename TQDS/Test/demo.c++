#include <iostream>
using namespace std;
int main()
{
    const int N = 10;
    long x = N;
    int r = 1;
    while(r*r <= 4)
        r++;
    cout << r;
}