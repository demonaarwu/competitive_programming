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

    int rating;
    while (t--)
    {
        cin >> rating;

        int i;
        if (rating >= 1900)
        {
            i = 1;
        }
        else if (rating >= 1600)
        {
            i = 2;
        }
        else if (rating >= 1400)
        {
            i = 3;
        }
        else
        {
            i = 4;
        }

        cout << "Division " << i << endl;
    }
	return 0;
}