//数列的第一项为n，以后将此为前一项的平方根，求数列的前m项的和。
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a;
    int b;
    double sum;
    while(cin >> a >> b){
        sum = a;
        for(int i = 0; i < b-1; i++){
            sum += sqrt(a);
            a = sqrt(a);
        }
        printf("%.2f\n", sum);
    }
}