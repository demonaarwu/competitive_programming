#pragma GCC optimize("O2")
#include <bits/stdc++.h>
/*-----define-----*/
#define kidd ios_base::sync_with_stdio(false), cin.tie(NULL)
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

    string n;

    while (t--)
    {
        cin >> n;
        int digits = n.length();

        int count = 0;
        for (int i = 0; i < digits; i++)
        {
            if (n[i] != '0')
            {
                count++;
            }
        }

        cout << count << endl;

        int zeros = 0;
        for (int i = digits-1; i >= 0; i--, zeros++)
        {
            if (n[i] != '0')
            {
                cout << n[i];
                for (int j = 0; j < zeros; j++)
                {
                    cout << 0;
                }
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
