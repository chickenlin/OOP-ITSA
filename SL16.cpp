#include<bits/stdc++.h>
using namespace std;
void tri(int m)
{
    int i,j;
    for (i = 1; i <= m; i++)
    {
        for (j = 0; j < i; j++)
            cout << '*';
        cout << endl;
    }
    i = i - 2;
    while (i >= 1)
    {
        for (j = 0; j < i; j++)
            cout << '*';
        i--;
        cout << endl;
    }
}
void sqr(int m)
{
    int i,j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            cout << '*';
        cout << endl;
    }
    //printf("\n");
}
int main()
{
    int n,m,flag = 0;
    while (cin >> n >> m,n)
    {
        if (flag)
            cout << endl;
        if (n == 1)
            tri(m);
        else
            sqr(m);
        flag = 1;
    }
    return 0;
}
