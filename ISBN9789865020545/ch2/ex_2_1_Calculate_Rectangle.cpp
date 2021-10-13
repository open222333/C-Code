// 計算長方形周長與面積
#include <iostream>
using namespace std;
int main()
{
    int length, width;
    cout << "請輸入長度？";
    cin >> length;
    cout << "請輸入寬度？";
    cin >> width;
    cout << "周長：" << (length + width) * 2 << endl;
    cout << "面積：" << length * width << endl;
}