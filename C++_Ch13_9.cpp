#include <iostream>
using namespace std;
int main(){
    int num[9][9];
    for (int i = 0;i<9;i++){
        for (int j = 0;j<9;j++){
            num[i][j] = (i+1) * (j+1);
        }
    }
    for (int i = 0;i<9;i++){
        for (int j = 0;j<9;j++){
            cout << "*(num+" << i << ")+" << j << "=" << *(num+i)+j << endl;
            cout << "&num[" << i << "][" << j << "]=" << &num[i][j] << endl;
            cout << "*(*(num+" << i << ")+" << j << ")=" << *(*(num+i)+j) << endl;
            cout << "num[" << i << "][" << j << "]=" << num[i][j] << endl;
        }
    }
}