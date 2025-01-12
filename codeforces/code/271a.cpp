#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;

    year++;

    while (1)
    {
        string s = to_string(year);
        set<char> digits;

        for (int i = 0; i < 4; i++)
        {
            digits.insert(s[i]);
        }

        if (digits.size() == 4)
        {
            cout << s;
            return 0;
        }
        year++;
    }

}
