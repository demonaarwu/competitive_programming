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
    int k, r;
    cin >> k >> r;

    for (int i = 1; true; i++)
    {
        if ((k*i) % 10 == r || (k*i) % 10 == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
	return 0;
}
