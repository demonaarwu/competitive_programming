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

    int a = 0;
    int b = 0;

    while (n--)
    {
        int a1, b1;
        cin >> a1 >> b1;

        if (a1 > b1)
        {
            a++;
        }
        else if (a1 < b1)
        {
            b++;
        }
    }

    if (a == b)
    {
        cout << "Friendship is magic!^^\n";
    }
    else if (a > b)
    {
        cout << "Mishka\n";
    }
    else
    {
        cout << "Chris\n";
    }
	return 0;
}
