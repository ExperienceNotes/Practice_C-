#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int count[6],repeat[48];
    int pz;
    srand(time(NULL));
    for (int i=0;i<48;i++){
        repeat[i] = 0;
    }
    for (int i=0;i<6;i++){
        pz = rand()%48;
        if (repeat[pz] == 0){
            count[i] = pz;
            repeat[pz] = 1;
        }
        else{
            i -=1;
        }
    }
    for (int i=0;i<6;i++){
        cout << "第" << i+1 << "個得獎號碼是:" <<count[i] << endl;
    }
}