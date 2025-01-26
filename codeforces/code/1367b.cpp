#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
/*-----define-----*/
#define kidd ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MS0(X) memset((X), 0, sizeof((X)))
#define int long long
/*-----typedef-----*/
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;

signed main()
{
	kidd;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int odd = 0;
        int even = 0;
        int k;

        for (int i = 0; i < n; i++)
        {
            cin >> k;

            if (k % 2 != i % 2)
            {
                if (k % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }

        }
        if (even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << -1 << endl;
        }

    }
	return 0;
}
