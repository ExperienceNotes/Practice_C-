#include <iostream>
using namespace std;
int main(){
    int start,end,i,num1,num2,R;
    i = 0;
    start = 1000;
    end = 2000;
    num1 = 12;
    num2 = 17;
    while (start < end){
        i += 1;
        start = start*(1+(double)10/100);
        cout << "第" << i << "年後，存款金額為" << start << endl;
    }
    cout << "do while 寫法:" << endl;
    start = 1000;
    i = 0;
    do{
        i += 1;
        start = start*(1+(double)10/100);
        cout << "第" << i << "年後，存款金額為" << start << endl;
    } while (start < end);
    do {
        R = num1%num2;
        num1 = num2;
        num2 = R;
    }while (R!=0);
    cout << num1 << "為最大公因數" << endl;
    int flag,n,x,z = 2;
    flag = 1;
    x = 100;
    while((flag == 1)&&(z<n)){
        if (x%i==0){
            flag = 0;
        }
        z+=1;
    }
    if (flag == 0){
        cout << x << "是質數" << endl;
    }
    else{
        cout << x << "不是質數" << endl;
    }
}