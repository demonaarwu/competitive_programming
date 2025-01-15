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
    vector<int> good = {};

    int i = 1;
    while (good.size() < 1000)
    {
        if (!((i%3==0) || (i % 10 == 3))) 
        {
            good.push_back(i);
        }

        i++;
    }

    int t;
    cin >> t;

    while (t--)
    {
        cin >> i;

        cout << good[i-1] << endl;
    }
}
