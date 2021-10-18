// 加總
#include <iostream>
using namespace std;
int main()
{
    int start, end, inc;
    int sum = 0;
    cout << "請輸入加總開始值？";
    cin >> start;
    cout << "請輸入加總終止值？";
    cin >> end;
    cout << "請輸入遞增減值？";
    cin >> inc;
    for (int i = start; i <= end; i = i + inc)
    {
        sum = sum + i;
        cout << "i = " << i << ", sum = " << sum << endl;
    }
}