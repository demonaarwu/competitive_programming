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

    string name = "Timur";
    sort(begin(name), end(name));

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO\n";
        }
        else
        {
            sort(begin(s), end(s));
            if (name == s)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

	return 0;
}
