// 雙重指標
#include <iostream>
using namespace std;
int main()
{
    int **aa, *a, num = 100;
    a = &num;
    aa = &a;
    cout << "&num=" << &num << endl; // num的位址
    cout << "num=" << num << endl;   // num的值
    cout << "&a=" << &a << endl;     // 指標變數a的位址
    cout << "a=" << a << endl;       // 指標變數a的值 - num的位址
    cout << "*a=" << *a << endl;     // 指標變數a所指的值 - num的值
    cout << "&aa=" << &aa << endl;   // 雙重指標變數aa的位址
    cout << "aa=" << aa << endl;     // 雙重指標變數aa的值 - a的位址
    cout << "*aa=" << *aa << endl;   // 雙重指標變數aa所指的值 - a 的值
    cout << "**aa=" << **aa << endl; // 雙重指標變數aa所指的值 - num的值
}