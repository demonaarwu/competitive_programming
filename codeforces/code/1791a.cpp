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

    int chars[26] = {0};
    string cf = "codeforces";
    for (int i = 0; i < 10;i++)
    {
        chars[cf[i]-'a'] = 1;
    }
    while (t--)
    {
        char c;
        cin >> c;

        if (chars[c-'a'])
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