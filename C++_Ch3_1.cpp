#include <iostream>
using namespace std;
int main(){
    int score = 98;
    int cost = 2400;
    int a,b,c;
    a = 3,b = 4,c = 5;
    //第一題
    if (score >60){
        cout << "很好,棒棒喔" << endl;
    }
    if (cost>=2000){
        cost = cost * 0.8;
    }
    //第二題
    else {
        cost = cost;
    }
    cout << "價格為:" << cost << endl;
    //第三題
    if ((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout << "為三角形" << endl;
    }
    else{
        cout << "不為三角形無法構成三角形" << endl;
    }
    cout << "為什麼我的code runner 不能cin !!!,要我在終端機執行拉....這樣我載code runner 幹嘛ㄚㄚㄚㄚ";
}