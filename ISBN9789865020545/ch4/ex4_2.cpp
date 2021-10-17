// 三一律
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cout << "請輸入A值？";
    cin >> A;
    cout << "請輸入B值？";
    cin >> B;
    if (A > B)
    {
        cout << "A大於B" << endl;
    }
    else if (A < B)
    {
        cout << "A小於B" << endl;
    }
    else
    {
        cout << "A等於B" << endl;
    }
}