#include <iostream>
using namespace std;
int main(){
    int A[8][8];
    //init
    for(int i=0;i<8;i++){
        A[i][0] = 1;
        A[i][i] = 1;
    }
    for(int i=2;i<8;i++){
        for(int j=1;j<i;j++){
            A[i][j] = A[i-1][j-1] + A[i-1][j];
        }
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<=i;j++){
            cout <<A[i][j] << ",";
        }
        cout << endl;
    }
}