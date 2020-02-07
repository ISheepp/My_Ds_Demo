#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for(a; a <= b; a++)
    {
        sum += a;
    }
    cout << endl;
    cout << sum;
}
