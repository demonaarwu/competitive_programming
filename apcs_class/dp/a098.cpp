#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    vector<int> arr;
    int maximum = 0;

    while (cin >> n)
    {
        arr.push_back(n);
        maximum = max(n, maximum);
    }

    vector<int> ways = {1, 5, 10, 25, 50};
    int dp[5][maximum+1];

    for (int i = 0; i <= maximum; i++)
    {
        dp[0][i] = 1;
    }

    for (int way = 1; way < 5; way++)
    {
        for (int i = 0; i <= maximum; i++)
        {
            dp[way][i] = dp[way-1][i];

            for (int j = 1; ways[way] * j <= i; j++)
            {
                dp[way][i] += dp[way-1][i - ways[way] * j];
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (dp[4][arr[i]] == 1)
        {
            cout << "There is only 1 way to produce " << arr[i] << " cents change." << endl;
        }
        else
        {
            cout << "There are " << dp[4][arr[i]] << " ways to produce " << arr[i] << " cents change." << endl;
        }
    }
}
