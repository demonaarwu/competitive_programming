#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<char, int> games;

    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        games[s[i]] += 1;
    }

    if (games['A'] > games['D'])
    {
        cout << "Anton\n";
    }
    else if (games['D'] > games['A'])
    {
        cout << "Danik\n";
    }
    else
    {
        cout << "Friendship\n";
    }
}
