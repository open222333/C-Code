// 結構指標
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct stu
    {
        char name[10];
    };

    struct stu *pstud; // 宣告結構指標
    struct stu stud;
    pstud = &stud; // 結構指標初始化
    strcpy((*pstud).name, "John");
    cout << "學生姓名為" << (*pstud).name << endl;
}