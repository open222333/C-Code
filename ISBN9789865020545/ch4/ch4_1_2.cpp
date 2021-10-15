// 郵資計算
#include <iostream>
using namespace std;
int main()
{
    int weight;
    cout << "請輸入物品重量？";
    cin >> weight;
    if (weight <= 5)
    {
        cout << "所需郵資為50元" << endl;
    }
    else if (weight <= 10)
    {
        cout << "所需郵資為70元" << endl;
    }
    else if (weight <= 15)
    {
        cout << "所需郵資為90元" << endl;
    }
    else if (weight <= 20)
    {
        cout << "所需郵資為110元" << endl;
    }
    else
    {
        cout << "超過20公斤無法寄送" << endl;
    }
}