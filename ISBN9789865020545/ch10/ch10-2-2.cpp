// 函式 求質數
#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    int result;
    for (int i = 2; i <= 100; i++)
    {
        result = isPrime(i);
        if (result == 1)
        {
            cout << i << "為質數" << endl;
        }
    }
}

int isPrime(int x)
{
    int j = 2, flag = 1;
    while ((flag == 1) && (j < x))
    {
        if (x % j)
        {
            flag = 0;
            break;
        }
        j++;
    }

    return flag;
}