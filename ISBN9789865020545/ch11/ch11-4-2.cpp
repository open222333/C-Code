// 字串函式 登入系統
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char pwd[4] = "c++";
    char input[40];
    do
    {
        cout << "請輸入密碼";
        cin >> input;
    // strcmp() : 字元陣列是否一致 不等於0 表示不一致
    } while (strcmp(input, pwd) != 0);
}