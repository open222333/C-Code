// 分組報告
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "請輸入座號？";
    cin >> num;
    if (num % 5 != 0){
        cout << "分組組別為" << (num / 5) + 1 << endl;
    }else{
        cout << "分組組別為" << num / 5 << endl;
    }
}