#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "lzy";
    string b = "test";
    cout << a.size();
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 1;
}