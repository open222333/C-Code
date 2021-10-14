// 三角形判斷
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "請輸入三角形a邊長為：";
    cin >> a;
    cout << "請輸入三角形b邊長為：";
    cin >> b;
    cout << "請輸入三角形c邊長為：";
    cin >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        cout << "可構成三角形" << endl;
    }
    else
    {
        cout << "無法構成三角形" << endl;
    }
}