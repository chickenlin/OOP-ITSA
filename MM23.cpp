#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,i,j,arr[1100],ans = 0x3f3f3f3f;
    cin >> n;
    for (i = 0;i < n;i++)
        cin >> arr[i];
    sort(arr,arr + n);
    for (i = 0;i < n;i++)
    {
        int tmp = 0;
        for (j = 0;j < n;j++)
        {
            if (i != j)
                tmp = tmp + abs(arr[i] - arr[j]);
        }
        if (tmp < ans)
            ans = tmp;
    }
    cout << ans << endl;
}
int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
        solve();
    return 0;
}
