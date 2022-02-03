// 字串函式 - 字串以空白鍵進行切割
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[40] = "beauty is in the eye of the beholder";
    char *ptr;              // 宣告字元指標
    ptr = strtok(str, " "); // strtok() : 切割字串
    while (ptr != NULL)
    {
        cout << ptr << endl;
        // 讀取str的下一個字
        ptr = strtok(NULL, " ");
    }
}