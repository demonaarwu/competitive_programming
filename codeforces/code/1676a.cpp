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
        int a = 0;
        int b = 0;

        for (int i = 0; i < 3; i++)
        {
            a += (s[i]-'0');
            b += (s[i+3]-'0');
        }

        if (a == b)
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