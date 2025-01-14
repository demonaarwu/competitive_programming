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

    int n;
    cin >> n;

    vector<int> home(n);
    vector<int> guest(n);
    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> guest[i]; 
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && guest[i] == home[j]) 
            {
                count++;
            }
        }
    }

    cout << count << endl;
	return 0;
}
