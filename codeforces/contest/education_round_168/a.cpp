#include<bits/stdc++.h>

using namespace std;

char convert(char c)
{
    return (char) ('a' + ((c - 'a' + 1) % 26));
}

int main()
{
    int n;
    cin >> n;

    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        bool is_repeated = false;
        cout << s[0];
        char latest = s[0];

        for (int i = 1, len=s.length(); i < len; i++)
        {
            if (s[i] == latest && !is_repeated)
            {
                cout << convert(s[i]);
                latest = convert(s[i]);
                is_repeated = true;
            }
            else
            {
                latest = s[i];
            }
            cout << s[i];
        }

        if (!is_repeated)
        {
            cout << convert(s[s.length()-1]);
        }

        cout << '\n';
    }
}
