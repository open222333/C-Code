// 以結構指標傳入函式
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
    stu student[2];
} teach;

void in(stu *student)
{
    cout << "請輸入姓名";
    getline(cin, student->name);
    cout << "請輸入座號";
    cin >> student->seat;
    cout << "請輸入國文成績";
    cin >> student->chi;
    cout << "請輸入英文成績";
    cin >> student->eng;
    cout << "請輸入數學成績";
    cin >> student->math;
    cin.get(); // 因為會多輸入一個enter，多讀取一個字元避免成為下一次輸入的開始字元
}

stu *add(stu *student)
{
    student->chi += 5;
    student->eng += 10;
    student->math += 20;
    return student;
}

int main()
{
    stu *pstud1, *pstud2, stud1, stud2;
    pstud1 = &stud1;
    pstud2 = &stud2;
    in(pstud1);
    in(pstud2);

    teach teacher;
    teacher.name = "Ms. Wang";
    // 加成績分數
    pstud1 = add(pstud1);
    pstud2 = add(pstud2);
    teacher.student[0] = *pstud1;
    teacher.student[1] = *pstud2;

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
