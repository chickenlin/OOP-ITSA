#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[100];
    arr[0] = 6;
    arr[1] = 28;
    arr[2] = 496;
    arr[3] = 8128;
    arr[4] = 33550336;
    arr[5] = 8589869056;
    arr[6] = 137438691328;
    int ncase;
    cin >> ncase;
    while (ncase--)
    {
        long long in,i;
        int flag = 0;
        cin >> in;
        for (i = 0;i < 7;i++)
        {
            if (arr[i] == in)
                flag = 1;
        }
        if (flag)
            cout << "perfect" << endl;
        else
            cout << "nonperfect" << endl;
    }
    return 0;
}
