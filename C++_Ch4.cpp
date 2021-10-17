#include <iostream>
using namespace std;
int main(){
    int score;
    int weight;
    char ch;
    score = 90;
    weight = 15;
    ch = 'b';
    if (score >= 80){
        cout << "非常棒喔" << endl;
    }
    else if (score >=60){
        cout << "還不錯啦" << endl;
    }
    else{
        cout << "不太可以喔" << endl;
    }
    if (weight<=5){
        cout << "郵資50元喔"<< weight << endl;
    }
    else if (weight<=10){
        cout << "郵資70元喔" << weight << endl;
    }
    else if (weight<=15){
        cout << "郵資90元喔" << weight << endl;
    }
    else if (weight<=20){
        cout << "郵資110元喔" << weight << endl;
    }
    else{
        cout << "抱歉超過20公斤我們不送太重了" << weight << endl;
    }
    if ((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u')){
        cout << ch << ":為母音" << endl;
    }
    else {
        cout << ch << ":為子音" << endl;
    }
}