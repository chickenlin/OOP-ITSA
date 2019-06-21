#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ncase;
    cin >> ncase;
    while (ncase--)
    {
        long long ans = 1,i,n;
        cin >> n;
        for (i = 1;i <= n;i++)
            ans = ans * i;
        cout << ans << endl;
    }
    return 0;
}
