// 門票購買
#include <iostream>
using namespace std;
int main()
{
    int num, amout;
    cout << "請輸入購買門票？";
    cin >> num;
    switch (num)
    {
    case 0 ... 1:
        amout = 100;
        break;
    case 2 ... 5:
        amout = 100 * num * 0.9;
        break;
    case 6 ... 10:
        amout = 100 * num * 0.8;
        break;
    case 11 ... 20:
        amout = 100 * num * 0.7;
        break;
    default:
        amout = 100 * num * 0.6;
        break;
    }
    cout << "門票總金額為" << amout << endl;
}