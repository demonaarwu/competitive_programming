#include <bits/stdc++.h>
#include <iterator>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x;
    cin >> n >> x;

    vector<int> ways(n);
    for (int i = 0; i < n; i++)
    {
	cin >> ways[i];
    }

    sort(begin(ways), end(ways));

    if (ways[0] > x)
    {
	cout << 0 << endl;
	return 0;
    }

    int dp[n][x+1];

    dp[0][0] = 0;

    for (int i = 1 ; i <= x; i++)
    {
	dp[0][i] = 1 ? (i % ways[0] == 0) : 0;
    }

    for (int way = 1; way < n; way++)
    {
	dp[way][0] = 0;

	for (int i = 1; i <= x; i++)
	{
	    dp[way][i] = dp[way-1][i] + (1 ? (i % ways[0] == 0) : 0);

	    for (int count = 1; count * ways[way] <= i; count++)
	    {
		dp[way][i] += dp[way-1][i - count * ways[way]];
	    }
	}
    }

    cout << dp[n-1][x] << endl;

    for (int way = 0; way < n; way++)
    {
	for (int i = 0; i <= x; i++)
	{
	    cout << dp[way][i] << ' ';
	}
	cout << endl;
    }
}
