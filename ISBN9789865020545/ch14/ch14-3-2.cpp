// 指標與結構陣列
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

typedef struct _teach
{
    string name;
    stu student[5];
} teach;

int main()
{
    stu *pstu;
    stu stud[5] = {
        {"John", 1, 56, 77, 87},
        {"Marry", 2, 90, 88, 70},
        {"Claire", 3, 76, 89, 45},
        {"Bruce", 4, 98, 90, 87},
        {"Miller", 5, 56, 56, 99}};

    teach teacher;
    int sumChi = 0, sumEng = 0, sumMath = 0;
    double avgChi, avgEng, avgMath;
    teacher.name = "Ms. Wang";
    for (int i = 0; i < 5; i++)
    {
        teacher.student[i] = stud[i];
    }

    for (pstu = &teacher.student[0]; pstu < &teacher.student[5]; pstu++)
    {
        sumChi += pstu->chi;
        sumEng += pstu->eng;
        sumMath += pstu->math;
    }

    avgChi = (double)sumChi / 5;
    avgEng = (double)sumEng / 5;
    avgMath = (double)sumMath / 5;
    cout << "國文全班總分為" << sumChi << endl;
    cout << "國文全班平均為" << avgChi << endl;
    cout << "英文全班總分為" << sumEng << endl;
    cout << "英文全班平均為" << avgEng << endl;
    cout << "數學全班總分為" << sumMath << endl;
    cout << "數學全班平均為" << avgMath << endl;
}