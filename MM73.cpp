#include<bits/stdc++.h>
using namespace std;
int main()
{
    float in;
    cin >> in;
    cout << "Fahrenheit = " << fixed << setprecision(2) << in * 9 / 5 + 32 << endl;
    cout << "Absolute temperature = " << in + 273.15 << endl;
    return 0;
}
