// 猜數字
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int guess, target;
    srand(time(NULL)); // srand()函式初始化隨機函式
    target = rand() % 100 + 1; // rand()函式產生隨機值
    do
    {
        cout << "猜一個數字?";
        cin >> guess;
        if (guess > target)
        {
            cout << "猜小一點" << endl;
        }
        else if (guess < target)
        {
            cout << "猜大一點" << endl;
        }
        else
        {
            cout << "猜中了" << endl;
        }
    } while (guess != target);
}