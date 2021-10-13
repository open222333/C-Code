// 華氏轉攝氏
#include <iostream>
using namespace std;
int main()
{
    double f;
    cout << "請輸入華氏溫度？";
    cin >> f;
    double c = ((f - 32) * 5 / 9);
    cout << "轉換成攝氏溫度為" << c << endl;
}