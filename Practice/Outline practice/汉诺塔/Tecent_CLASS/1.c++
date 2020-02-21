#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
    if(n == 1)
        cout << a << "-->" << c << endl;
    if(n >= 2)
    {
        /* code */
        hanoi(n-1, a, c, b);
        cout << a << "-->" << c << endl;
        hanoi(n-1, b, a, c);
    }
}
int main(){
    int n = 3;
    hanoi(n, 'A', 'B', 'C');
    system("pause");
}

/*
T(n) = 2T(n-1) + c   //c是常数
...
...
T(n) = 2^(n-1)b + ((2^n-1)-1)c
时间复杂度:O(2^n)
*/