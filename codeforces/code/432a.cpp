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

    int n, k;
    cin >> n >> k;

    VI arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(begin(arr), end(arr));

    int poss = 0;
    for (int i = 2; i < n && arr[i] <= (5-k); i += 3)
    {
        poss++;
    }

    cout << poss << endl;
	return 0;
}
