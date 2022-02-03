// 使用new與delete動態配置記憶體
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "p+" << i << "=" << p + i << endl;
    }
    delete[] p; // 釋放整數指標p所指的記憶體
}