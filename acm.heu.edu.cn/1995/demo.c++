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
/*
其实这是一个很简单的找规律的数学题，

当只有1个盘子的时候，1号盘子移动1次；

当有2个盘子的时候，1号盘子要移动2次,2号盘子移动1次；

当有3个盘子的时候，1号盘子要移动4次，2号盘子移动2次，3号盘子移动1次；

以此类推：

当有n个盘子时，1号盘子移动2^(n-1),2号盘子移动2^(n-2)，……，n号盘子移动2^(n-n)次；
*/