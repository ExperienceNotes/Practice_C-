#include <iostream>
using namespace std;
int * sqr(int *,int);
int main(){
    int *p,a[4] = {1,2,3,4};
    int score[5] = {60,70,63,59,99};
    p = &a[0];
    for (int i = 0;i < 4;i++){
        cout << "p+"<< i << "=" << p+i << ",&a[" << i << "]=" << &a[i] << ",a+"<< i << "=" << a+i << endl;
        cout << "*(p+"<< i << ")=" << *(p+i) << ",a[" << i << "]=" << a[i] << ",*(a+"<< i << ")=" << *(a+i) << endl;
    }
    int *square = sqr(score,5);
    for (int i = 0;i < 5;i++){
        cout << "score[" << i << "]=" << score[i] << endl;
        cout << "square[" << i << "]=" << square[i] << endl;
    }
}
int * sqr(int score[], int n){
    int *a = new int[n];
    for (int i = 0;i < n;i++){
        a[i] = score[i] * score[i];
    }
    return a;
}