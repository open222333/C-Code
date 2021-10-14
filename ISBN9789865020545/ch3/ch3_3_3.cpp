// 密碼驗證
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "請輸入數值密碼：";
    cin >> num;
    if (num == 999)
    {
        cout << "登入完成" << endl;
    }
    else
    {
        cout << "登入失敗" << endl;
    }
}