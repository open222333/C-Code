// 三數總合與平均
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    double sum_sc;
    cout << "請輸入第一次期中考成績？";
    cin >> a;
    cout << "請輸入第二次期中考成績？";
    cin >> b;
    cout << "請輸入期末考成績？";
    cin >> c;
    sum_sc = a + b + c;
    cout << "總分：" << sum_sc << endl;
    cout << "平均：" << sum_sc / 3 << endl;
}