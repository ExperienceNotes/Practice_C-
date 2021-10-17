#include <iostream>
using namespace std;
int main(){
    double r, cir, area;
    cout<< "請輸入半徑:";
    cin>> r;
    cir = 2*r*3.14;
    cout<< "圓周長"<< cir << endl;
    area = r*r*3.14;
    cout<< "面積為" << area << endl;
}