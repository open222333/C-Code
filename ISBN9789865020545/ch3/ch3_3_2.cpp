// 判斷奇偶數
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "請輸入一個值：";
    cin >> num;
    if ((num % 2) == 0)
    {
        cout << num << "為偶數" << endl;
    }
    else
    {
        cout << num << "為奇數" << endl;
    }
}