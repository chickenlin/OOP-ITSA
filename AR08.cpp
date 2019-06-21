#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000],pre[1000],i = 0,j,n,ans = 0;
    while (cin >> arr[i])
        i++;
    pre[0] = arr[0];
    n = i;
    for (i = 1;i < n;i++)
        pre[i] = arr[i] + pre[i - 1];
    for (i = 0;i < n - 1;i++)
        for (j = i + 1;j < n;j++)
    {
        if (pre[j] - pre[i] > ans)
            ans = pre[j] - pre[i];
    }
    cout << ans << endl;
    return 0;
}
