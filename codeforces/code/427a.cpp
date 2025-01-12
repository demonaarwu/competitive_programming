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
    int t;
    cin >> t;

    int c = 0, b = 0;

    int k;
    while (t--)
    {
        cin >> k;

        if (k > 0)
        {
            b += k;
        }
        else
        {
            if (b <= 0)
            {
                c++;
            }
            else
            {
                b--;
            }
        }
    }

    cout << c << endl;
	return 0;
}
