#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,sum;
    cout << "請輸入上衣數目:";
    cin >> num1;
    cout << "請輸入褲子數目:";
    cin >> num2;
    cout << "請輸入背心數目:";
    cin >> num3;
    sum = num1 * 250 + num2 * 300 + num3 * 200;
    cout << "總價格:" << sum <<endl;
}