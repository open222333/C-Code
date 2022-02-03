// 字串方法
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr("hello!");
    cout << mystr.length() << endl;

    string mystr2("I love C");
    mystr2.resize(10, '+');
    cout << mystr2 << endl;
}