// 時差調整
#include <iostream>
using namespace std;
int main()
{
    int time, usa_time;
    cout << "請輸入台灣時間：";
    cin >> time;
    usa_time = time + 13;
    if (usa_time > 23){
        usa_time = usa_time % 24;
    }
    cout << "美國時間為" << usa_time << endl;
}