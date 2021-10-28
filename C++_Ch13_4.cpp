#include <iostream>
using namespace std;
void increaseByRef(int &);
void swapByRef(int &,int &);
int main(){
    int a = 10;
    int a_s = 10,b_s = 20;
    increaseByRef(a);
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    swapByRef(a_s,b_s);
    cout << "a_s = " << a_s << endl;
    cout << "b_s = " << b_s << endl;
}
void increaseByRef(int &x){
    x = x + 1;
    cout << "&x = " << &x << endl;
    cout << "x = " << x << endl;
}
void swapByRef(int &a_s,int &b_s){
    int temp = 0;
    temp = a_s;
    a_s = b_s;
    a_s = temp;
}