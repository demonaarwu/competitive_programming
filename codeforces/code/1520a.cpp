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
        int len;
        cin >> len;
        string s;
        cin >> s;

        bool distracted = false;
        set<char> tasks;
        tasks.insert(s[0]);
        for (int i = 1; i < len && !distracted; i++)
        {
            if (tasks.count(s[i]) != 0 && s[i] != s[i-1])
            {
                distracted = true;
            }
            else
            {
                tasks.insert(s[i]);
            }
        }

        if (!distracted)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

	return 0;
}
