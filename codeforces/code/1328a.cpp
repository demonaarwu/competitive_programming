#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    int a, b;
    while (t--)
    {
        cin >> a >> b;

        if (a >= b)
        {
            cout << (b-(a%b))%b;
        }
        else
        {
            cout << b-a;
        }
        cout << endl;
    }
}

