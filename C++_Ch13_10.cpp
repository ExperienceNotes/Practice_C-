#include <iostream>
using namespace std;
int main(){
    char *name[5];
    name[0] = "John";
    name[1] = "name_1";
    name[2] = "name_2";
    name[3] = "name_3";
    name[4] = "name_4";
    for (int i = 0;i<5;i++){
        cout << "&name[" << i << "]=" << &name[i] << endl;
        cout << "座號" << i+1 << "號同學名字為" << name[i] << endl;
    }
}