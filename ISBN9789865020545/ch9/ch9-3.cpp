// 氣泡排序
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int A[10], tmp;
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        A[i] = rand() % 100 + 1;
        cout << "A[" << i << "]=" << A[i] << endl;
    }
    for (int i = 9; i >= 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (A[j] > A[j + 1])
            {
                tmp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = tmp;
            }
        }
    }
    cout << "排序後" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "A[" << i << "]=" << A[i] << endl;
    }
}