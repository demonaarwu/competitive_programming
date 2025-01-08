#include <bits/stdc++.h>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n < 26)
    {
        cout << "NO\n";
    }
    else
    {
        set<char> alphabets;
        for (int i = 0; i < n; i++)
        {
            alphabets.insert(tolower(s[i]));
        }

        if (alphabets.size() == 26)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

