#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    cin >> in;
    cout << "NT10=" << in / 10 << endl;
    in = in % 10;
    cout << "NT5=" << in / 5 << endl;
    in = in % 5;
    cout << "NT1=" << in << endl;
    return 0;
}
