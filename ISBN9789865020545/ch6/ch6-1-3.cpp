// 計算 1+(1+2)+(1+2+3)...(1+2+3+...+n)
#include <iostream>
using namespace std;
int main()
{
    int n, sum, sumAll = 0;
    cout << "請輸入n值?";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
        cout << "i=" << i << ",sum=" << sum << endl;
        sumAll += sum;
    }
    cout << "1+(1+2)+(1+2+3)...(1+2+3+...+n)=" << sumAll << endl;
}