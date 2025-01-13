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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int left = 0;
    int right = n-1;

    int ab[2] = {0, 0};
    int turn = 0;
    while (left <= right)
    {
        if (arr[left] > arr[right])
        {
            ab[turn] += arr[left];
            left++;
        }
        else
        {
            ab[turn] += arr[right];
            right--;
        }

        turn = (turn+1) % 2;
    }

    cout << ab[0] << ' ' << ab[1] << endl;
	return 0;
}
