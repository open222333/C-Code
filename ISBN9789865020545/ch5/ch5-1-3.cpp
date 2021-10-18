// 折舊計算
#include <iostream>
using namespace std;
int main()
{
    int start, end, n;
    float value;
    cout << "請輸入初始值？";
    cin >> start;
    cout << "請輸入折舊價值？";
    cin >> end;
    cout << "請輸入n?";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        value = start - (start - end) * i / n;
        cout << "第" << i << "年價值為" << value << endl;
    }
}