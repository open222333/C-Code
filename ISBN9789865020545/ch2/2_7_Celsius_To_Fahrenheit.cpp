// 攝氏轉華氏
#include <iostream>
using namespace std;
int main()
{
    double C, F;
    cout << "請輸入攝氏溫度？";
    cin >> C;
    F = C * 9 / 5 + 32;
    cout << "轉換成華氏溫度為" << F << endl;
}