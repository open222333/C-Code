// 階乘計算
#include <iostream>
using namespace std;
int main()
{
    int i, M, fac = 1;
    cout << "請輸入M？";
    cin >> M;
    i = 1;
    while (fac < M)
    {
        i = i + 1;
        fac = fac * i;
    }
    cout << i << "階乘大於等於" << M << endl;
}