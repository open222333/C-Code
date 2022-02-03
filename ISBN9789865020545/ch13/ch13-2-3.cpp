// 間接運算子
#include <iostream>
using namespace std;
int main()
{
    int *p, x = 1, y = 2; // *p 是宣告指標
    cout << "x=" << x << "，&x=" << &x << endl;
    cout << "y=" << y << "，&y=" << &y << endl;
    p = &x;
    cout << "執行p=&x後，p=" << p << endl;
    cout << "*p=" << *p << endl; // *p 是間接運算子
    p = &y;
    cout << "執行p=&y後，p=" << p << endl;
    cout << "*p=" << *p << endl; // *p 是間接運算子
}