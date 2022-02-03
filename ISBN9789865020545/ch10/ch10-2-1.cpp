// 函式 計算BMI
#include <iostream>
using namespace std;
double BMI(double, double);
int main()
{
    double w, h, bmi;
    cout << "請輸入體重(KG)?";
    cin >> w;
    cout << "請輸入身高(M)?";
    cin >> h;
    bmi = BMI(w, h);
    cout << "BMI=" << bmi << endl;
    if (bmi < 18)
    {
        cout << "體重過輕" << endl;
    }
    else if (bmi < 24)
    {
        cout << "體重正常" << endl;
    }
    else if (bmi < 27)
    {
        cout << "體重過重" << endl;
    }
    else
    {
        cout << "體重肥胖" << endl;
    }
}

double BMI(double weight, double height)
{
    double result;
    result = weight / (height * height);
    return result;
}