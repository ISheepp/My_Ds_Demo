#include <iostream>
using namespace std;
long long answer(int n){
    long long t = 1;
    for(int i = 1; i <= n; i++){
        t *= 2;
    }
    return t;
}
int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << answer(n - k) << endl;
    }
}