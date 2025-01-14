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

bool found = false;

void dfs(vector<int> tries, int a, int b, int t)
{
    if (a > b)
    {
        return;
    }
    else if (a == b)
    {
        found = true;
        cout << "YES\n";
        tries.push_back(a);
        int len = tries.size();
        cout << len << endl;
        for (int i = 0; i < len; i++)
        {
            cout << tries[i] << ' ';
        }
        cout << endl;

        return;
    }
    else
    {
        VI tmp = tries;
        tmp.push_back(a);
        dfs(tmp, a*2, b, t+1);
        dfs(tmp, a*10+1, b, t+1);

        if (t == 0 && !found)
        {
            cout << "NO\n";
        }
    }
}

signed main()
{
	//kidd;

    int a, b;
    cin >> a >> b;

    dfs({}, a, b, 0);
    return 0;
}
