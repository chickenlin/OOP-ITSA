#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans = 0,tmp;
    while (cin >> tmp)
        if (ans < tmp)
            ans = tmp;
    cout << ans << endl;
    return 0;
}
