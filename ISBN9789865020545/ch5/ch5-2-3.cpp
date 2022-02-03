// 求最大公因數
// A與B的最大公因數 = B與"A除以B餘數"的最大公因數
#include <iostream>
using namespace std;
int main()
{
    int A, B, R;
    cout << "請輸入第一數A?";
    cin >> A;
    cout << "請輸入第二數B?";
    cin >> B;
    do
    {
        cout << A << "與" << B << "的最大公因數相當於求";
        R = A % B; // R為A除以B的餘數
        A = B;
        B = R;
        cout << A << "與" << B << "的最大公因數" << endl;
    } while (R != 0); // R等於0 跳出迴圈
    cout << A << "為最大公因數" << endl;
}