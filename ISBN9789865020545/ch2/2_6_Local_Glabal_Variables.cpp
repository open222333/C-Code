//區域與全域變數
#include <iostream>
using namespace std;
int global = 5;
int main()
{
    int local = 2;
    cout << "local=" << local << ",global=" << global << endl;
    {
        // local = 7
        int local = 7;
        cout << "local=" << local << ",global=" << global << endl;
    }
    cout << "local=" << local << ",global=" << global << endl;
}