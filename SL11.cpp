#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,in,i,j;
    vector<int> arr;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> in;
        arr.push_back(in);
    }
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
        {
            int tmp2 = 10,flag = 1;
            while (flag)
            {
                if (arr[i] % tmp2 > arr[j] % tmp2)
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                    flag = 0;
                }
                else if (arr[i] % tmp2 < arr[j] % tmp2)
                    break;
                tmp2 = tmp2 * 10;
            }
        }
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i != n - 1)
            cout << ' ';
        else
            cout << endl;
    }
    return 0;
}
