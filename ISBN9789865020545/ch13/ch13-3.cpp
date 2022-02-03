// 函式的傳值呼叫(call by value)
#include <iostream>
using namespace std;
void increaseByValue(int x)
{
    x++;
}

void increaseByAddress(int *x)
{
    *x += 1;
}

void swapByValue(int x, int y)
{
    // 使用傳值呼叫 交換兩數
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByAddress(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10;
    increaseByValue(a);
    cout << "increaseByValue a=" << a << endl; // 因為x與a不同記憶體位置，印出是10

    increaseByAddress(&a);
    cout << "increaseByAddress a=" << a << endl;

    int a1 = 10, b1 = 20;
    swapByValue(a1, b1);
    cout << "swapByValue a1=" << a1 << ",swapByValue b1=" << b1 << endl; // 因為不同記憶體位置，值不變

    swapByAddress(&a1, &b1);
    cout << "swapByAddress a1=" << a1 << ",swapByAddress b1=" << b1 << endl;
}