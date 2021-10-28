#include <iostream>
using namespace std;
int main(){
    int *p,x = 1,y = 2;
    cout << "x="<< x << "，&x = " << &x << endl;
    cout << "y="<< y << "，&y = " << &y << endl;
    p = &x;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    p = &y;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
}