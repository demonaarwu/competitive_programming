#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cases;
    cin >> cases;

    vector<int> dp(25001, 0);
    while (cases--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        fill(dp.begin(), dp.end(), 0);
        dp[0] = 0;

        int half = sum/2;
        for (int index = 0; index < n; index++)
        {
            for (int i = half; i >= arr[index]; i--)
            {
                dp[i] = max(dp[i], dp[i-arr[index]] + arr[index]);
            }
        }

        cout << sum - 2 * dp[half] << endl;
    }
}
