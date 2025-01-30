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
        int x, y, n;
        cin >> x >> y >> n;

        if (n % x >= y)
        {
            cout << n - (n%x - y) << endl;
        }
        else
        {
            int k = (n+(y - n%x) - x);
            cout << ((k > 0)? k: 0)<< endl;
        }
    }

	return 0;
}
