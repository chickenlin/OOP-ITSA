#include<bits/stdc++.h>
using namespace std;
bool prime[31000];
void pri()
{
    int i,j;
    vector<int> x;
    bool flag = false;
    x.push_back(2);
    for (i = 3; i < 31000; i++)
    {
        flag = false;
        for (j = 0; j < x.size(); j++)
        {
            if (i % x[j] == 0)
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            prime[i] = true;
            x.push_back(i);
        }
    }
}
int main()
{
    memset(prime,false,sizeof(prime));
    pri();
    int n,ans;
    while (cin >> n,n)
    {
        ans = 0;
        for (int i = 0; i < n; i++)
            if (prime[i])
                ans++;
        cout << ans + 1 << endl;
    }
    return 0;
}
