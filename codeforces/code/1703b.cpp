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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int ballot = 0;
        set<char> letters;
        for (int i = 0; i < n; i++)
        {
            if (letters.count(s[i]) == 0)
            {
                ballot += 2;
                letters.insert(s[i]);
            }
            else
            {
                ballot++;
            }
        }

        cout << ballot << endl;
    }

	return 0;
}
