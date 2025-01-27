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

        int k;
        int ones = 0;
        int twos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            if (k == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }

        if (ones % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            if (twos % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                if (ones/2 >= 1)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

	return 0;
}
