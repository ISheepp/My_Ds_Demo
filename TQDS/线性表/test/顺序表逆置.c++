#include <iostream>
#define maxSize 50
using namespace std;

int a[maxSize];
int length;
int createList(int a[], int &length){
    cout << "输入线性表长度:";
    cin >> length;
    if(length > maxSize)
        return 0;
    cout << "输入线性表元素" << endl;
    for(int i =0; i < length; i++){
        cin >> a[i];
    }
    return 1;
}
//标准逆置
void Nreverse(int a[], int left, int right){
    int temp;
    for(int i = left, j = right; i < j; i++, j--){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
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
    createList(a, length);
    Nreverse(a, 0, length-1);
    // reverse(a, 0, 6, 2);
    // moveToEnd(a, 7, 2);
    // moveT(a, 7, 2);
    for(int i = 0; i < length; i++){
        cout << a[i] << "," ;
    }
}
