// 判斷象限
#include <iostream>
using namespace std;
int main(){
    double x,y;
    string s;
    cout << "請輸入該點的X座標：";
    cin >> x;
    cout << "請輸入該點的Y座標：";
    cin >> y;
    if (x > 0 and y > 0){
        s = "第一象限";
    }else if (x > 0 and y < 0){
        s = "第二象限";
    }else if (x < 0 and y < 0){
        s = "第三象限";
    }else if (x > 0 and y < 0){
        s = "第四象限";
    }else{
        s = "座標軸上";
    }
    cout << "該點在" << s << endl;
}