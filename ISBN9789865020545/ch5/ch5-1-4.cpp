// 求出所有因數
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "請輸入n?";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cout << i << "為" << n << "的因數" << endl;
        }
    }
}