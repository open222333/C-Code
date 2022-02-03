// enum 列舉
#include <iostream>
using namespace std;
int main()
{
    enum season(spring, summer, fall, winter);
    enum season now;
    now = fall;
    if (now == spring)
    {
        cout << "now is spring" << endl;
    }
    if (now == summer)
    {
        cout << "now is summer" << endl;
    }
    if (now == fall)
    {
        cout << "now is fall" << endl;
    }
    if (now == winter)
    {
        cout << "now is winter" << endl;
    }
}