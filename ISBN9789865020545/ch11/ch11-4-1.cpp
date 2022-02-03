// 字串函式 取出字串中每個字元
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[12] = "c++ is easy";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        cout << str[i] << endl;
    }
}