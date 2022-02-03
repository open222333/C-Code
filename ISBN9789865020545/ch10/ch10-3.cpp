// 遞迴
#include <iostream>
using namespace std;
int f(int n)
{
    int re;
    if (n == 1)
    {
        re = 1;
    }
    else
    {
        re = n * f(n - 1);
    }
    cout << n << "階乘等於" << re << endl;
    return re;
}
int main()
{
    int n, result;
    cout << "請輸入N值?";
    cin >> n;
    result = f(n);
    cout << n << "階乘等於" << result << endl;
}