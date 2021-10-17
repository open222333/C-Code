// 水費計算
#include <iostream>
using namespace std;
int main()
{
    int cubica;
    double amount;
    cout << "請輸入用水度數？";
    cin >> cubica;
    switch (cubica)
    {
    case 0 ... 10:
        amount = cubica * 7.35;
        break;
    case 11 ... 30:
        amount = cubica * 9.45 - 21;
        break;
    case 31 ... 50:
        amount = cubica * 11.55 - 84;
        break;
    default:
        amount = cubica * 12.075 - 110.25;
        break;
    }
    cout << "水費為" << amount << endl;
}