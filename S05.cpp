#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i,n,in;
    vector<int> data;
    cin >> n;
    for (i = 0;i < 2 * n;i++)
    {
        cin >> in;
        data.push_back(in);
    }
    sort(data.begin(),data.end());
    cout << data[n - 1] << endl;
}
int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
        solve();
    return 0;
}
