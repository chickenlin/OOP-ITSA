#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i,n;
    vector<pair<int,int> > data;
    cin >> n;
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    while (n != 1)
    {
        for (i = 2;i <= n;i++)
        {
            int base = i,ex = 0;
            while (n % i == 0)
            {
                n = n / i;
                ex++;
            }
            if (ex)
            data.push_back(make_pair(base,ex));
        }
    }
    for (i = 0;i < data.size();i++)
    {
        cout << data[i].first;
        if (data[i].second > 1)
            cout << "^" << data[i].second;
        if (i != data.size() - 1)
            cout << "*";
        else
            cout << endl;
    }
}
int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
        solve();
    return 0;
}
