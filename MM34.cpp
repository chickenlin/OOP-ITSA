#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int i,n,arr[10000],ans = 1;
    cin >> n;
    for (i = 0;i < n;i++)
        cin >> arr[i];
    sort(arr,arr + n);
    for (i = 2;i <= min(arr[0],arr[n - 1]);i++)
    {
        if (arr[0] % i == 0 && arr[n - 1] % i == 0)
            ans = i;
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
