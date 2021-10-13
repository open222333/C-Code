// 計程車車資計算
#include <iostream>
using namespace std;
int main(){
    double milage, money;
    cout << "請輸入里程數？";
    cin >> milage;
    if (milage < 1.25){
        cout << "所需車資為" << 70 << endl;
    }else{
        double x = milage - 1.25;
        money = 70 + (int)(x / 0.25) * 5;
        cout << "所需車資為" << money << endl;
    }
}