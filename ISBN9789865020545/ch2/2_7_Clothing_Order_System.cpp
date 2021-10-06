//服裝訂購系統
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, sum;
    cout << "請輸入上衣件數？";
    cin >> num1;
    cout << "請輸入褲子件數？";
    cin >> num2;
    cout << "請輸入背心件數？";
    cin >> num3;
    sum = 250 * num1 + 300 * num2 + 200 * num3;
    cout << "訂購服裝的總金額為" << sum << endl; // endl 表示換行
} // namespace st
