#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while (cin >> x)
    {
        if (x >= 31)
            cout << "Value of more than 31" << endl;
        else
            cout << (1 << x) << endl;
    }
    return 0;
}
