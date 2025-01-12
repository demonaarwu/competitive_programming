#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    if (s1.length() != s2.length())
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != s2[s1.length()-i-1])
            {
                cout << "NO\n";
                return 0;
            }
        }

        cout << "YES\n";
    }
}
