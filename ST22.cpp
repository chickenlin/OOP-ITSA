#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,ncase;
    cin >> ncase;
    while (ncase--)
    {
        char x[10],y[10];
        cin >> x >> y;
        int a = 0,b = 0;
        for (i = 0;i < 8;i++)
        {
            a = a * 2 + x[i] - '0';
            b = b * 2 + y[i] - '0';
        }
        cout << a + b << endl;
    }
    return 0;
}
