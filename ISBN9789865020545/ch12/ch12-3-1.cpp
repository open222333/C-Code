// 檔案的讀取與寫入
// 系統串流
#include <iostream>
// 檔案處理
#include <fstream>
#include <string>
using namespace std;
int main()
{
    // 宣告in為ifstream物件
    ifstream in("input.txt");
    // 宣告out為ofstream物件
    ofstream out("output.txt");
    string s;
    while (getline(in, s))
    {
        out << s << endl;
    }
}