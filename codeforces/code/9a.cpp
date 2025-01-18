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

    int y, w;
    cin >> y >> w;

    int require = max(y, w);

    if (require > 6)
    {
        cout << "0/1\n";
    }
    else if (require == 1)
    {
        cout << "1/1\n";
    }
    else
    {
        int poss = 7-require;
        int gcd_ = gcd(poss, 6);
        cout << poss/gcd_ << "/" << 6/gcd_ << endl;
    }

	return 0;
}
