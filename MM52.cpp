#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(6);
    a.push_back(28);
    a.push_back(496);
    a.push_back(8128);
    int x;
    cin >> x;
    for (int i = 0;i < a.size();i++)
        if (x > a[i])
            cout << a[i] << endl;
    return 0;
}
