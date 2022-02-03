// 選擇排序
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int A[10], max_index, tmp;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << "A[" << i << "]=" << A[i] << endl;
    }

    for (int i = 9; i > 0; i--)
    {
        max_index = 0;
        for (int j = 1; j <= i; j++)
        {
            if (A[max_index] < A[j])
            {
                max_index = j;
            }
            tmp = A[max_index];
            A[max_index] = A[i];
            A[i] = tmp;
        }
        cout << "排序後" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "A[" << i << "]=" << A[i] << endl;
        }
    }
}