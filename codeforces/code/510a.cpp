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

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            if (i % 4 == 0)
            {
                cout << '#';
                for (int j = 0; j < m-1; j++)
                {
                    cout << '.'; 
                }
            }
            else
            {
                for (int j = 0; j < m-1; j++)
                {
                    cout << '.'; 
                }
                cout << '#';
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                cout << '#';
            }
        }

        cout << endl;
    }
	return 0;
}
