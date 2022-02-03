// 求兩點距離
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, x2, y1, y2, dist;
    cout << "請輸入X1?";
    cin >> x1;
    cout << "請輸入Y1?";
    cin >> y1;
    cout << "請輸入X2?";
    cin >> x2;
    cout << "請輸入Y2?";
    cin >> y2;
    dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << "兩點距離為" << dist << endl;
}