#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;

    int dp[7][n+1];

    dp[1][0] = 0;

    for (int i = 1; i <= n; i++)
    {
	dp[1][i] = 1;
    }

    for (int size = 2; size <= 6; size++)
    {
	for (int i = 0; i <= n; i++)
	{
	    dp[size][i] = dp[size-1][i];

	    for (int c = 1; c * size <= i; c++)
	    {
		dp[size][i] += dp[size-1][i - c * size];
	    }
	}
    }

    cout << dp[6][n] << endl;
}
