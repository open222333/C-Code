// 動態記憶體配置 使用malloc與free動態配置記憶體
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int *p = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        cout << "p+" << i << "=" << p + i << endl;
    }
    free(p); // 釋放整數指標p所指的記憶體
}