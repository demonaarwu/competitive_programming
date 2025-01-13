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

    string s;
    while (t--)
    {
        cin >> s;

        if (tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's')
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
