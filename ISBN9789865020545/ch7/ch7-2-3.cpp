// 一級陣列 全校成績分數統計
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int score[1000]; // 儲存分數
    int num[11];     // 儲存級距人數
    int j;           // 級距分組

    // 初始化隨機函數
    srand(time(NULL));

    // 初始化 num陣列元素皆為0
    for (int i = 0; i < 11; i++)
    {
        num[i] = 0;
    }

    for (int i = 0; i < 1000; i++)
    {
        score[i] = rand() % 101;
        j = score[i] / 10;
        num[j] = num[j] + 1;
    }

    for (int i = 0; i < 11; i++)
    {
        cout << "num[" << i << "]=" << num[i] << endl;
    }
}