#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int index;


    for (int i = 0, k = s.length()-1; i < k; i++)
    {
        if (s[i] == '0')
        {
            for (int j = i+1; j < k+1; j++)
            {
                cout << s[j];
            }

            cout << '\n';

            return 0;
        }
        else
        {
            cout << s[i];
        }
    }
}
