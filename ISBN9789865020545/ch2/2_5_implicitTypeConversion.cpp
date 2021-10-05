/*
隱含型別轉換與強制型別轉換
*/
# include <iostream>
using namespace std;
int main(){
    int a;
    double x;
    cout << "3/2的結果為" << 3/2 << endl;
    a = 3/2;
    cout << "a為整數資料型別，a=3/2的結果為" << a << endl;
    x = 3/2;
    cout << "x為倍幅精度浮點數資料型別，x=3/2的結果為" << x << endl;
}
