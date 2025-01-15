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

    if (n % 2 == 0)
    {
        cout << 4 << ' ' << (n/2 - 2)* 2 << endl;
    }
    else
    {
        cout << 9 << ' ' << (n-9) << endl;
    }
	return 0;
}
