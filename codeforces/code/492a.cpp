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

    vector<int> arr(2);
    arr[1] = 1;

    for (int i = 2; true; i++)
    {
        if (arr[i-1] + (1+i)*i/2 > n)
        {
            cout << i-1 << endl;
            return 0;
        }
        else
        {
            arr.push_back(arr[i-1]+(1+i)*i/2);
        }
    }
	return 0;
}
