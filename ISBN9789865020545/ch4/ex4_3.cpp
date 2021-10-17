// 求三數最大值
#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "請輸入A值？";
    cin >> A;
    cout << "請輸入B值？";
    cin >> B;
    cout << "請輸入C值？";
    cin >> C;
    if (A > B and A > C)
    {
        cout << "A=" << A << "為最大值" << endl;
    }
    else if (B > A and B > C)
    {
        cout << "B=" << B << "為最大值" << endl;
    }
    else
    {
        cout << "C=" << C << "為最大值" << endl;
    }
}