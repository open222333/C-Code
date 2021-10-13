// 賣場買飲料
#include <iostream>
using namespace std;
int main()
{
    int num, dozen;
    cout << "請輸入購買飲料的罐數？";
    cin >> num;
    dozen = num / 12;
    cout << "需花費" << dozen * 200 + (num - dozen * 12) * 20 << endl;
}