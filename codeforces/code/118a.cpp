#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    int length = s.length();

    for (int i = 0; i < length; i++)
    {
        if (find(vowels.begin(), vowels.end(), (char) tolower(s[i])) == vowels.end())
        {
            cout << '.';
            cout << (char) tolower(s[i]);
        }
    }
}
