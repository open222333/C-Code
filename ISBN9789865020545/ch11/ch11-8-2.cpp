// 解密
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int length;
    cin >> str;
    length = str.length();
    for (int i = 0; i < length; i++)
    {
        cout << char(str.at(i) - 3);
    }
    cout << endl;
}