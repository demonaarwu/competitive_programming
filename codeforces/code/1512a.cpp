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

    while (t--)
    {
        int n;
        cin >> n;

        VI arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        VI arr2 = arr;
        sort(begin(arr), end(arr));

        int spy = (arr[0] != arr[1])? arr[0]: arr[n-1];

        for (int i = 0; i < n; i++)
        {
            if (arr2[i] == spy)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
	return 0;
}
