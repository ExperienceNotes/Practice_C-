#include <iostream>
using namespace std;
void increaseByValue(int);
void increaseByAddress(int *);
int main(){
    int a = 10;
    increaseByValue(a);
    cout << "increaseByValue:" <<"a = " << a << endl;
    increaseByAddress(&a);
    cout << "increaseByAddress:" <<"a = " << a << endl;
}
void increaseByValue(int a){
    a = a + 1;
}
void increaseByAddress(int *a){
    cout << "a = " << a << endl;
    *a = *a + 1;
}