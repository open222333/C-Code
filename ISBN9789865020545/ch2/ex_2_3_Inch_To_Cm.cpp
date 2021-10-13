// 英制轉公制
#include <iostream>
using namespace std;
int main()
{
    double ft, inch;
    cout << "請輸入幾尺？";
    cin >> ft;
    cout << "請輸入幾吋？";
    cin >> inch;
    cout << "轉換為公分，身高為" << ft * 30.48 + inch * 2.54 << endl;
}