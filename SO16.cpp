#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i,n,k;
    priority_queue<int> ans;
    cin >> n >> k;
    for (i = 0;i < n;i++)
    {
        int in;
        cin >> in;
        ans.push(in);
    }
    for (i = 1;i < k;i++)
        ans.pop();
    cout << ans.top() << endl;
}
int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
        solve();
    return 0;
}
