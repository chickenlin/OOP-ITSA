#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,obj[10000],stu[10000],i,j,ans = 0;
    cin >> n >> m;
    for (i = 0;i < n;i++)
        cin >> obj[i];
    for (i = 0;i < m;i++)
        cin >> stu[i];
    sort(obj,obj + n);
    sort(stu,stu + m);
    for (i = 0,j = 0;i < n && j < m;i++,j++)
    {
        while (stu[j] < obj[i] && j < m)
            j++;
        ans = ans + stu[j];
    }
    if (i == n)
        cout << ans << endl;
    else
        cout << "-1" << endl;
}
int main()
{
    //freopen("greedy_carryItem.in","r",stdin);
    int ncase;
    cin >> ncase;
    while (ncase--)
        solve();
    return 0;
}
