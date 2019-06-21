#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    cout << a << ' ' << b << ' ';
    cout << fixed << setprecision(2) << c << ' ';
    cout << b * c << ' ';
    cout << b * c * 12 / 100 << endl;
    return 0;
}
