// 登入系統
#include <iostream>
using namespace std;
int main()
{
    int acc = 123, pass = 0000, a, p;
    do
    {
        cout << "請輸入帳號?";
        cin >> a;
        cout << "請輸入密碼?";
        cin >> p;
        if ((a == acc) && (p == pass))
        {
            cout << "帳號與密碼正確" << endl;
            break;
        }
        else
        {
            cout << "登入失敗" << endl;
        }
    } while (1);
}