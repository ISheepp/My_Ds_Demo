/*

*/
#include <iostream>
using namespace std;
void insertElm(int A[], int m, int n){
    int i, j;
    int temp;
    for(i = m; i < m+n; i++){
        temp = A[i];
        for(j = i - 1; j >= 0 && temp < A[j]; j--){
            A[j+1] = A[j];
        }
        A[j+1] = temp;
    }
}
int main(){
    int A[] = {1,3,5,7,9,2,4,6};
    insertElm(A, 5, 3);
    for(int n : A){
        cout << n << " ";
    }
}