// 體溫與發燒
#include <iostream>
using namespace std;
int main()
{
    double temp;
    cout << "請輸入體溫？";
    cin >> temp;
    if (temp > 39)
    {
        cout << "體溫過高" << endl;
    }
    else if (temp > 36)
    {
        cout << "體溫正常" << endl;
    }
    else
    {
        cout << "體溫過低" << endl;
    }
}