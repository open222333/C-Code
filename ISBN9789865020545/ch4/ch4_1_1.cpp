// 分數與評語
#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "請輸入一個成績？";
    cin >> score;
    if (score >= 80)
    {
        cout << "非常好" << endl;
    }
    else if (score >= 60)
    {
        cout << "不錯喔" << endl;
    }
    else
    {
        cout << "要加油" << endl;
    }
}