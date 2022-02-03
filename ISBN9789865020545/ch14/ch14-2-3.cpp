// 結構指標存取
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    struct stu
    {
        char name[10];
    };
    struct stu *pstud;
    struct stu stud;
    pstud = &stud;
    // 使用(->)運算子 存取結構指標的個別資料成員
    strcpy(pstud->name, "John"); // 初始化結構指標pstud的name為 John
    cout << "學生姓名為" << (*pstud).name << endl;
    cout << "學生姓名為" << pstud->name << endl;
}