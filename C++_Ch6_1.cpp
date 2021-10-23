#include <iostream>
using namespace std;
int main(){
    int n,flag,j;
    n = 100;
    for(int i=2;i<=n;i++){
        flag = 1;
        j = 2;
        while ((flag==1) && (j<i)){
            if (i%j==0){
                flag = 0;
            }
            j+=1;
        }
        if (flag == 1){
            cout << i << "是質數" << endl;
        }
    }
}