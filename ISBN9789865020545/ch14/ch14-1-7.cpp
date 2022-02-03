// 結構
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // 宣告結構_stu
    typedef struct _stu
    {
        char name[10];
        int seat;
        int chi;
        int eng;
        int math;
    } stu;

    stu student1;                  // 宣告student1為stu資料型別
    strcpy(student1.name, "John"); // 設定student1.name
    student1.seat = 1;
    student1.chi = 68;
    student1.eng = 99;
    student1.math = 90;

    stu student2 = {"Mary", 2, 88, 60, 79};

    // 宣告結構teach
    typedef struct _teach
    {
        char name[10];
        stu student[2];
    } teach;

    teach teacher;
    strcpy(teacher.name, "Ms. Wang");
    teacher.student[0] = student1;
    teacher.student[1] = student2;

    cout << "教師為" << teacher.name << endl;
    cout << "學生為" << teacher.student[0].name << endl;
    cout << "座號為" << teacher.student[0].seat << endl;
    cout << "國文成績為" << teacher.student[0].chi << endl;
    cout << "英文成績為" << teacher.student[0].eng << endl;
    cout << "數學成績為" << teacher.student[0].math << endl;
    cout << "學生為" << teacher.student[1].name << endl;
    cout << "座號為" << teacher.student[1].seat << endl;
    cout << "國文成績為" << teacher.student[1].chi << endl;
    cout << "英文成績為" << teacher.student[1].eng << endl;
    cout << "數學成績為" << teacher.student[1].math << endl;
}