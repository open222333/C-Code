// 近視判斷
#include <iostream>
using namespace std;
int main()
{
    double num;
    cout << "請輸入一個數值：";
    cin >> num;
    if (num < 0.9)
    {
        cout << "近視" << endl;
    }
    else
    {
        cout << "正常" << endl;
    }
}