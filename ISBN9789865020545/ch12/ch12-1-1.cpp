// 求三角函式
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double deg, r;
    cout << "請輸入度數?";
    cin >> deg;
    r = deg / 180 * 3.1415926;
    cout << "Sin(" << r << ")=" << sin(r) << endl;
    cout << "Cos(" << r << ")=" << cos(r) << endl;
    cout << "Tan(" << r << ")=" << tan(r) << endl;
}