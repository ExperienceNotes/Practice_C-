#include <iostream>
using namespace std;
int main(){
    int **aa,*a,num = 100;
    a = &num;
    aa = &a;
    cout << "&num = " << &num << endl;
    cout << "num = " << num << endl;
    cout << "&a = " << &a << endl;
    cout << "a = " << a << endl;
    cout << "*a = " << *a << endl;
    cout << "&aa = " << &aa << endl;
    cout << "aa = " << aa << endl;
    cout << "*aa = " << *aa << endl;
    cout << "**aa = " << **aa << endl;
}