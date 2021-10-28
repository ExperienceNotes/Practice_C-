#include <iostream>
using namespace std;
int* min(int *,int *);
int main(){
    int *p,x = 1,y = 2;
    cout << "x = " << x << ",&x=" << &x << endl;
    cout << "y = " << y << ",&y=" << &y << endl;
    p = min(&x,&y);
    cout << "執行 p=min(&x,&y)後，p=" << p << endl;
    cout << "*p = " << *p << endl;
}
int* min(int *a,int *b){
    int *ptr;
    if (*a>*b){
        ptr = b;
    }
    else{
        ptr = a;
    }
    return ptr;
}