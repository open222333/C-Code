// 二維陣列 計算各科總分
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int score[5][40];
    int total;
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            score[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        total = 0;
        for (int j = 0; j < 40; j++)
        {
            total += score[i][j];
            cout << "第" << i + 1 << "科第" << j + 1 << "位同學成績為" << score[i][j] << endl;
        }
        cout << "第" << i + 1 << "科總分為" << total << endl;
    }
}