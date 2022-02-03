// 遞迴 m的n次方
#include <iostream>
using namespace std;
int p(int m, int n)
{
    int re;
    if (n == 1)
    {
        re = m;
    }
    else
    {
        re = m * p(m, n - 1);
    }
    cout << m << "的" << n << "次方等於" << re << endl;
    return re;
}

int main()
{
    int n, m, result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = p(m, n);
    cout << m << "的" << n << "次方等於" << result << endl;
}