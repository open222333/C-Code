// 組合C(m,n) 由m個物品 求取n的所有可能情形
#include <iostream>
using namespace std;
int C(int m, int n)
{
    int re;
    if ((n == 0) || (n == m))
    {
        re = 1;
    }
    else
    {
        re = C(m - 1, n) + C(m - 1, n - 1);
    }
    cout << "由" << m << "取" << n << "的組合數有" << re << "種" << endl;
    return re;
}

int main()
{
    int m, n, result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = C(m, n);
    cout << "由" << m << "取" << n << "的組合數有" << result << "種" << endl;
}