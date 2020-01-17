#include <iostream>
using namespace std;

void testYinYong(int a, int b, int &c)
{
    c = a + b;
}
void testNoYY(int a, int b, int c)
{
    c = a + b;
}
int main()
{
    int result = 0;
    testNoYY(1,2,result);
    cout << result;
}