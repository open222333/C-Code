// 傳參考呼叫
#include <iostream>
using namespace std;
void increaseByRef(int &x)
{
    x++;
    cout << "&x=" << &x << endl;
}

void swapByRef(int &x, int &y)
{
    int temp;
    cout << "&x=" << &x << ",&y=" << &y << endl;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 10;
    increaseByRef(a);
    cout << "&a=" << &a << endl;
    cout << "a=" << a << endl;

    int a1 = 10, b1 = 20;
    cout << "&a1=" << &a1 << ",&b1=" << &b1 << endl;
    cout << "交換前a1=" << a1 << ",b1=" << b1 << endl;
    swapByRef(a1, b1);
    cout << "交換後a1=" << a1 << ",b1=" << b1 << endl;
}