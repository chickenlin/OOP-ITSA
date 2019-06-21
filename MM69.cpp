#include<bits/stdc++.h>
using namespace std;
int main()
{
    float hei,wei,bmi;
    cin >> hei >> wei;
    bmi = wei / (hei * hei / 100 / 100);
    cout << fixed << setprecision(1) << bmi << ' ';
    if (bmi < 18.5)
        cout << "underweight" << endl;
    else if (bmi >= 18.5 && bmi < 24)
        cout << "normal" << endl;
    else if (bmi >= 24 && bmi < 27)
        cout << "overweight" << endl;
    else if (bmi >= 27 && bmi < 30)
        cout << "mild obesity" << endl;
    else if (bmi >= 30 && bmi < 35)
        cout << "moderate obesity" << endl;
    else
        cout << "severe obesity" << endl;
    return 0;
}
