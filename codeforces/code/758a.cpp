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
	//kidd;

    int n;
    cin >> n;

    int max_ = 0;
    int sum = 0;

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        max_ = max(k, max_);
        sum += k;
    }

    cout << max_*n - sum << endl;
	return 0;
}
