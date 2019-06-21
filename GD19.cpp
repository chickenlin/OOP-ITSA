#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    priority_queue<int> b;
    char blank;
    char in[2000];
    int i,ans = 0;
    while (fgets(in,2000,stdin) != NULL)
    {
        int num = 0;
        for (i = 0; i < strlen(in) - 1; i++)
        {
            if (isdigit(in[i]))
            {
                num = num * 10 + in[i] - '0';
            }
            else if (in[i] == ' ')
            {
                a.push_back(num);
                if (a.size() == 1)
                    b.push(num);
                else
                {
                    if (b.top() != num)
                        b.push(num);
                }
                num = 0;
            }
        }
        a.push_back(num);
        if (b.top() != num)
            b.push(num);
        while (b.size())
        {
            int tmp = upper_bound(a.begin(),a.end(),b.top()) - lower_bound(a.begin(),a.end(),b.top());
            if (tmp > ans)
                ans = tmp;
            b.pop();
        }
        printf("%d\n",ans);
        memset(in,0,sizeof(in));
    }
    return 0;
}
