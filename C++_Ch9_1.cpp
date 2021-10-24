#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int score[8],left = 0,right = 7,mid = 4;
    int target = 59;
    int sort_ans[8];
    int min_index;
    srand(time(NULL));
    for(int i=0;i<8;i++){
        score[i] = rand()%100+1;
    }
    //排序
    for(int i=0;i<8;i++){
        min_index = i;
        for(int j=i+1;j<8;j++){
            if(score[j]<score[min_index]){
                min_index = j;
            }
        swap(score[min_index],score[j]);
        }
    }
    for (int i = 0; i < 8; i++)
    {
        cout << "["<< i <<"] = " << score[i] << ",";
    }
    cout << endl;
    //尋找
    while(score[mid] != target){
        cout << "檢查score["<< mid <<"] = " << score[mid] << "是否等於59" << endl;
        if(left>right){
            break;
        }
        if(score[mid]>target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
        mid = (left + right) / 2;
        cout << "left更新為:"<< left << endl;
        cout << "right更新為:"<< right << endl;
        cout << "mid更新為:"<< mid << endl;
    }
    if (score[mid] == 59){
        cout << "找到59了" << endl;
    }
    else{
        cout << "沒有59了" << endl;
    }
}