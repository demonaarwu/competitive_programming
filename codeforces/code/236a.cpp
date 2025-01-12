#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> characters;

    for (int i = 0; i < s.length(); i++)
    {
        characters.insert(s[i]);
    }

    int distinct = characters.size();

    if (distinct % 2 != 0)
    {
        cout << "IGNORE HIM!\n";
    }
    else
    {
        cout << "CHAT WITH HER!\n";
    }
}
