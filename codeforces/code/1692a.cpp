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
        VI arr(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        int a = arr[0];
        sort(begin(arr), end(arr));

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] == a)
            {
                cout << 3-i << endl;
                break;
            }
        }
    }
	return 0;
}
