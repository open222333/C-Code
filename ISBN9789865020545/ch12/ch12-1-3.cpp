// 求三角形面積
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    double s, area;
    cout << "請輸入a?";
    cin >> a;
    cout << "請輸入b?";
    cin >> b;
    cout << "請輸入c?";
    cin >> c;
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "三角形面積為" << area << endl;
}