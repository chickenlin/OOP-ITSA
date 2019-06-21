#include<bits/stdc++.h>
using namespace std;
int main()
{
    char in[2000];
    int i,num;
    while (fgets(in,2000,stdin) != NULL)
    {
        for (i = 0;i < strlen(in);i++)
        {
            if (isdigit(in[i]))
            {
                if (in[i] == '9')
                    cout << '0';
                else
                    cout << (char)(in[i] + 1);
            }
            else if (isupper(in[i]))
                cout << (char)tolower('Z' - (in[i] - 'A'));
            else if (islower(in[i]))
                cout << (char)toupper('z' - (in[i] - 'a'));
            else
                cout << (char)in[i];
        }
        memset(in,0,sizeof(in));
    }
    return 0;
}
