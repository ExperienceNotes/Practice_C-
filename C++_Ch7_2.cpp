#include <iostream>
using namespace std;
int main(){
    //初始化
    int score[1000],nums[11],j;
    for (int i=0;i<11;i++){
        nums[i] = 0;
    }
    for (int i=0;i<1000;i++){
        score[i] = rand()%101;
        j = score[i]/10;
        nums[j] = nums[j] + 1;
    }
    for (int i=0;i<11;i++){
        cout << "nums["<< i <<"] = " << nums[i] << endl;
    }
}