#include<bits/stdc++.h>
int main()
{
    long long ncase;
    cin >> ncase;
    while (ncase--)
    {
        long long n,ans = 0;
        cin >> n;
        ans = ans + n / 13;
        n = n % 13;
        ans = ans + n / 8;
        n = n % 8;
        ans = ans + n / 5;
        n = n % 5;
        ans = ans + n / 3;
        n = n % 3;
        ans = ans + n / 2;
        n = n % 2;
        ans = ans + n;
        cout << ans;
    }
    return 0;
}
