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

    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    string s;
    cin >> s;

    int cost = 0;

    for (int i = 0; i < s.length(); i++)
    {
        cost += arr[s[i]-'0'-1];
    }

    cout << cost << endl;
	return 0;
}
