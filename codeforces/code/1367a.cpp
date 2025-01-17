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

    string s;
    while (t--)
    {
        cin >> s;

        int len = s.length();

        cout << s[0];

        for (int i = 1; i < len-2; i += 2)
        {
            cout << s[i];
        }

        cout << s[len-1] << endl;
    }
	return 0;
}
