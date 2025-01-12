#include <bits/stdc++.h>

using namespace std;

#define int long long

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first == b.first ? a.second > b.second : a.first < b.first;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n)
    {
        vector<pair<int, int>> segments(n);

        for (int i = 0; i < n; i++)
        {
            cin >> segments[i].first >> segments[i].second;
        }

        sort(begin(segments), end(segments), cmp);

        int length = 0;
        int l = segments[0].first;
        int r = segments[0].second;

        for (int i = 1; i < n; i++)
        {
            if (segments[i].first >= r)
            {
                length += (r - l);
                l = segments[i].first;
                r = segments[i].second;
            }
            else if (segments[i].second > r)
            {
                r = segments[i].second;
            }
        }

        length += (r-l);
        cout << length << endl;
    }
}
