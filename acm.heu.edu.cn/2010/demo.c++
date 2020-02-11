//水仙花数
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    
    while(cin >> a >> b){
        int flag = 0;
        for(c = a; c <= b; c++){
            int c1 = c/100;
            int c2 = c/10%10;
            int c3 = c%10;
            int sum = pow(c1, 3) + pow(c2, 3) + pow(c3, 3);
            if(c == sum){
                cout << c << " ";
                flag += 1;
            }
        }
        if(flag == 0)
            cout << "no" << endl;
        else
        {
            cout << endl;
        }
        
    }
}