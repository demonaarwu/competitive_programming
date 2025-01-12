#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (islower(s[0]))
    {
        cout << (char) toupper(s[0]);
    }
    else
    {
        cout << s[0];
    }

    for (int i = 1; i < s.length(); i++)
    {
        cout << s[i];
    }
}
