#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in,i,j;
    while (cin >> n,n)
    {
        vector<int> x,y;
        for (i = 0; i < n; i++)
        {
            cin >> in;
            x.push_back(in);
        }
        for (i = 0; i < n; i++)
        {
            cin >> in;
                y.push_back(in);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int ans = 0;
        for (i = 0,j = 0; j < n; j++)
        {
            if (y[j] > x[i])
            {
                i++;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
