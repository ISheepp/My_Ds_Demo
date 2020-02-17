#include <iostream>
#include <cmath>
using namespace std;
main(){
    int n, i, j;
    double c[65] = {0, 1, 3}, b;
    while(cin >> n){
        for(i = 3; i <= n; i++){
            b = 1000000086; //最大的数据
            for(j = 1; j < i; j++){
                c[i] = c[j] * 2 + pow(2, i - j) - 1;
                if(b > c[i])
                    b = c[i];
            }
            c[i] = b;
        }
        cout << c[n] << endl;
    }
}