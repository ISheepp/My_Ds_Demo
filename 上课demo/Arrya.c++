#include <iostream>
using namespace std;
int main(){
    int a[]{1, 2,3, 4, 5};
    for(int n : a){
        cout << n << " ";
    }
    cout << endl;
    string s;
    s = "lzy";
    cout << s.size();
}