// 遞迴 費氏數列
#include <iostream>
using namespace std;
int F(int n)
{
    int re;
    if ((n == 0) || (n == 1))
    {
        re = 1;
    }
    else
    {
        re = F(n - 1) + F(n - 2);
    }
    cout << "費氏數列第" << n << "個元素值為" << re << endl;
    return re;
}

int main()
{
    int k, result;
    cout << "請輸入k值?";
    cin >> k;
    result = F(k);
    cout << "費氏數列第" << k << "個元素值為" << result << endl;
}