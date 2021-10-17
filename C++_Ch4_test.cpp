#include <iostream>
using namespace std;
int main(){
    int y,nums,cost;
    y = 2012;
    nums = 15;
    //第一題
    if (y % 4 == 0){
        if ( y % 100 ==0){
            if (y % 400 == 0 ){
                cout << y << ":是潤年" << endl;
            }
            else{
                cout << y << ":是平年" << endl;
            }
        }
        else{
            cout << y << ":是閏年年" << endl;
        }
    }
    else{
        cout << y << ":是平年" << endl;
    }
    //第二題
    if (nums < 2){
        cost = nums * 100;
    }
    else if (nums <=5){
        cost = nums * 100 * 0.9;
    }
    else if (nums <= 10){
        cost = nums * 100 * 0.8;
    }
    else if (nums <= 20){
        cost = 0;
        cout << "I'm Here" << endl;
        cost = nums * 100 * 0.7;
    }
    cout << "購買:" << nums << "張" << "價格:" << cost << endl; 
}