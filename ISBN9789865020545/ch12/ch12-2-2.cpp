// 樂透開獎
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int count = 0, prize[6];
    srand(time(NULL));
    prize[count] = rand() % 49 + 1;
    count += 1;
    while (count < 6)
    {
        prize[count] = rand() % 49 + 1;
        count++;
        for (int j = 0; j < count - 1; j++)
        {
            if (prize[j] == prize[count - 1])
            {
                count--;
                break;
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << prize[i] << " ";
    }
    cout << endl;
}