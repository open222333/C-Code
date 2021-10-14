// 絕對值
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "請輸入一數值：";
    cin >> num;
    if (num < 0)
    {
        num = num * -1;
    }
    cout << "取絕對值為" << num << endl;
}