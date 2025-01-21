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
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
	return 0;
}
