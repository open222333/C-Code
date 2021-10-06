// 計算圓面積以及圓周長
#include <iostream>
using namespace std;
int main()
{
    double r, cir, area;
    cout << "請輸入半徑?";
    cin >> r;
    cir = 2 * r * 3.14;
    cout << "圓周長為" << cir << endl;
    area = r * r * 3.14;
    cout << "圓面積為" << area << endl;
}