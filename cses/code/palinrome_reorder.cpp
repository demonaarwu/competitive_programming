#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int length = s.length();

    int alphabet[26] = {0};

    for (int i = 0; i < length; i++)
    {
        alphabet[s[i]-'A'] += 1;
    }

    bool odd_exist = false;
    int special_char;

    vector<char> palinrome;
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i]%2 != 0)
        {
            if (odd_exist)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
            else
            {
                odd_exist = true;
                special_char = i;
            }
        }
        else
        {
            for (int j = 0; j < alphabet[i]/2; j++)
            {
                palinrome.push_back((char) 'A' + i);
            }
        }
    }

    if (odd_exist)
    {
        for (int i = 0; i < alphabet[special_char]; i++)
        {
            palinrome.push_back((char) 'A' + special_char);
        }
    }

    for (int i = 25; i >= 0; i--)
    {
        if (special_char != i)
        {
            for (int j = 0; j < alphabet[i]/2; j++)
            {
                palinrome.push_back((char) 'A' + i);
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << palinrome[i];
    }

    cout << '\n';
}
