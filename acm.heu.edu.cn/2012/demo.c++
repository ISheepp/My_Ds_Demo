#include <iostream>
using namespace std;
int main(){
    int n, sum, i, j;
    int a, b;
    int A[200];
    while(cin >> a >> b){
        for(n = a, i = 0; n <= b, i <b-a+1; n++, i++){
            sum = n * n + n + 41;
            A[i] = sum;
        }
        for(j = 0; j < b-a+1; j++){
            if(A[j] % 2 != 0){
                continue;
            }
            else
            {
                break;
            }
        }
        if(j == b-a+1)
            cout << "OK" << endl;
        else
            cout << "Sorry" << endl;
    }
    system("pause");
}