// 亂數函式 擲骰子
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 6 + 1 << endl;
    }
}