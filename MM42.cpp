#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[60],i;
    arr[0] = 6;
    arr[1] = 28;
    arr[2] = 496;
    arr[3] = 8128;
    arr[4] = 33550336;
    int n;
    cin >> n;
    for (i = 0;i < 5;i++)
        if (n > arr[i])
            cout << arr[i] << ' ';
    cout << "is perfect number" << endl;
    return 0;
}
