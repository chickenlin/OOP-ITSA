#include<bits/stdc++.h>
using namespace std;
int main()
{
    float m;
    int arr[20],i,n;
    while (cin >> m)
    {
        m = m * 3.7119;
        n = (int)m;
        arr[9] = n / 10000;
        n = n % 10000;
        arr[8] = n / 5000;
        n = n % 5000;
        arr[7] = n / 2000;
        n = n % 2000;
        arr[6] = n / 1000;
        n = n % 1000;
        arr[5] = n / 500;
        n = n % 500;
        arr[4] = n / 100;
        n = n % 100;
        arr[3] = n / 50;
        n = n % 50;
        arr[2] = n / 10;
        n = n % 10;
        arr[1] = n / 5;
        n = n % 5;
        arr[0] = n;
        for (i = 0; i < 10; i++)
        {
            cout << arr[i];
            if (i != 9)
                cout << ' ';
            else
                cout << endl;

        }
    }
    return 0;
}
