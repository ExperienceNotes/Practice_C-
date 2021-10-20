#include <iostream>
using namespace std;
int main(){
    int n,end,j = 0,ans = 1,ans_2 = 0,ans_3 = 0;
    n = 5;
    end = 1000;
    for(int i=1;i<=n;i++){
        ans = ans * i;
        ans_2 = ans_2 + i*i;
    }
    cout << n << "階層答案為:" << ans << endl;
    cout << "1*1 + 2*2 + ... +n*n = "<< ans_2 << endl;
    while (ans_3 < end){
        ans_3 = ans_3 + j * j;
        j+=1;
    }
    cout << "j = " << j-1 <<",1^2 + 2^2 + ... +n^2 = "<< ans_3 << "大於1000" << endl;
}