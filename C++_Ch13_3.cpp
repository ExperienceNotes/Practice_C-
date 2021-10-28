#include <iostream>
using namespace std;
void swapByValue(int,int);
void swapByAddress(int *, int *);
int main(){
    int a = 10,b = 20;
    swapByValue(a,b);
    cout << "swapByValue:" << "a=" << a << ",b=" << b << endl;
    swapByAddress(&a,&b);
    cout << "swapByAddress:" <<"a=" << a << ",b=" << b << endl;
}
void swapByValue(int x,int y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}
void swapByAddress(int *x,int *y){
    int temp = 0;
    temp = *x;
    *x = *y;
    *y = temp;
}