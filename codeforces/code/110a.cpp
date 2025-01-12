#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int lucky_digit = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '4') || (s[i] == '7'))
        {
            lucky_digit++;
        }
    }

    s = to_string(lucky_digit);

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] != '4') && (s[i] != '7'))
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}
