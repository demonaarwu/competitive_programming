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

        bool is_square = true;

        if (s.length() % 2 != 0)
        {
            cout << "NO\n"; 
        }
        else
        {
            for (int i = 0; i < s.length()/2; i++)
            {
                if (s[i] != s[i+s.length()/2])
                {
                    is_square = false;
                    break;
                }
            }

            if (is_square)
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
