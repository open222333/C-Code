// 一維陣列 費氏數列
#include <iostream>
using namespace std;
int main()
{
    int F[16];
    F[0] = 1;
    F[1] = 1;
    for (int i = 2; i < 16; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    for (int i = 0; i < 16; i++)
    {
        cout << "第" << i + 1 << "個費氏數列數值為" << F[i] << endl;
    }
}