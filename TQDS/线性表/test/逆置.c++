#include <iostream>
#define maxSize 50
using namespace std;

int a[maxSize] = {1,2,3,4,5,6,7};
void reverse(int a[], int left, int right, int k){
    int temp;
    for(int i = left, j = right; i < left + k && i < j; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
void moveToEnd(int a[], int n, int k){
    reverse(a, 0, k-1, k);
    reverse(a, 0, n-1, k);
}
void moveT(int a[], int n, int p){
    reverse(a, 0, p-1, p);
    reverse(a, p, n-1, n-p);
    reverse(a, 0, n-1, n);
}
int main(){
    // reverse(a, 0, 6, 2);
    moveToEnd(a, 7, 2);
    // moveT(a, 7, 2);
    for(int i = 0; i < 7; i++){
        cout << a[i] << "," ;
    }
}
