#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,ans;
    while (cin >> a >> b)
    {
        ans = 0;
        if (b < a)
        {
            int tmp;
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a % 2)
            i = a;
        else
            i = a + 1;
        for (; i <= b; i = i + 2)
            ans = ans + i;
        cout << ans << endl;
    }
    return 0;
}
