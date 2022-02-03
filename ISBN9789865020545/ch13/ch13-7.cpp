// 傳入與傳回陣列
#include <iostream>
using namespace std;
int *sqr(int x[], int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = x[i] * x[i];
    }
    return a;
}

int main()
{
    int score[5] = {99, 44, 78, 87, 55};
    int *square = sqr(score, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << "score[" << i << "]=" << score[i] << endl;
        cout << "square[" << i << "]=" << square[i] << endl;
    }
}