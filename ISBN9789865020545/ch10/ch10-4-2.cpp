// 遞迴 最大公因數
#include <iostream>
using namespace std;
int gcd(int m, int n)
{
    int re;
    if (m == 0)
    {
        re = n;
    }
    else
    {
        cout << m << "與" << n << "的最大公因數相當於求" << n % m << "與" << m << "的最大公因數" << endl;
        re = gcd(n % m, m);
    }
    return re;
}

int main()
{
    int n, m, result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = gcd(m, n);
}