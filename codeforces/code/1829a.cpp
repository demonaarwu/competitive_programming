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
        string s;
        string cf = "codeforces";
        cin >> s;

        int differ = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != cf[i])
            {
                differ++;
            }
        }

        cout << differ << endl;
    }

	return 0;
}
