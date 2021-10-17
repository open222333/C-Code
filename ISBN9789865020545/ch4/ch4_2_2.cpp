// 母音與子音
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "請輸入一個小寫英文字母？";
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << "a為母音" << endl;
        break;
    case 'e':
        cout << "e為母音" << endl;
        break;
    case 'i':
        cout << "i為母音" << endl;
        break;
    case 'o':
        cout << "o為母音" << endl;
        break;
    case 'u':
        cout << "u為母音" << endl;
        break;
    default:
        cout << ch << "為子音" << endl;
        break;
    }
}