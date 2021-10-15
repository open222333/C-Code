// BMI計算
#include <iostream>
using namespace std;
int main()
{
    double weight, height, BMI;
    cout << "請輸入體重(KG)?";
    cin >> weight;
    cout << "請輸入身高(M)?";
    cin >> height;
    BMI = weight / (height * height);
    cout << "BMI為" << BMI << endl;
    if (BMI < 18)
    {
        cout << "體重過輕" << endl;
    }
    else if (BMI < 24)
    {
        cout << "體重正常" << endl;
    }
    else if (BMI < 27)
    {
        cout << "體重過重" << endl;
    }
    else
    {
        cout << "體重肥胖" << endl;
    }
}