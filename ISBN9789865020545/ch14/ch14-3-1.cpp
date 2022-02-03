// 結構指標與陣列
#include <iostream>
#include <string>
using namespace std;
typedef struct _stu
{
    string name;
    int seat;
    int chi;
    int eng;
    int math;
} stu;

int main()
{
    stu *pstu;
    stu stud[5] = {
        {"John", 1, 56, 77, 87},
        {"Marry", 2, 90, 88, 70},
        {"Claire", 3, 76, 89, 45},
        {"Bruce", 4, 98, 90, 87},
        {"Miller", 5, 56, 56, 99}};
    for (pstu = &stud[0]; pstu < &stud[5]; pstu++)
    {
        cout << pstu->chi << endl;
        cout << pstu->eng << endl;
        cout << pstu->math << endl;
    }
}
