// 列出2-10000質數
#include <iostream>
using namespace std;
int main()
{
    int i, j, flag;
    for (i = 2; i <= 10000; i++)
    {
        j = 2, flag = 1;
        while ((flag == 1) && (j < i))
        {
            if ((i % j) == 0)
            {
                // 如果有被自己以外的數字整除 就不是質數
                flag = 0;
            }
            j += 1;
        }
    }
    if (flag == 1)
    {
        cout << i << "為質數" << endl;
    }
}