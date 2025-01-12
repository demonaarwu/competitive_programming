#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    else
    {
        return p1.second < p2.second;
    }
}

int main()
{
    string s;

    while (getline(cin, s))
    {
        map<int, int> records;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            records[(int) s[i]] += 1;
        }
        vector<pair<int, int>> chars;
        for (auto record: records)
        {
            chars.push_back(record);
        }
        sort(begin(chars), end(chars), cmp);

        for (auto symbol: chars)
        {
            cout << symbol.first << ' ' << symbol.second << endl;
        }
        cout << endl;
    }
}
