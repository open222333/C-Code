// 選擇排序 - 找出陣列最大值
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {60, 90, 44, 98, 50};
    int max = A[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "]=" << A[i] << endl;
    }

    for (int i = 1; i < 5; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    cout << "陣列最大值為" << max << endl;
}