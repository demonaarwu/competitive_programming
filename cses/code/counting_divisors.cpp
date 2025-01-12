#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int x;

    set appear

    while (n--)
    {
        cin >> x;
        int divisors = 0;

        for (int i = 1, sqroot = (int) sqrt(x); i < sqroot; i++)
        {
            if (x % i == 0)
            {
                divisors += 2;
            }
        }

        if (pow((int) sqrt(x), 2) == x)
        {
            divisors++;
        }

        cout << divisors << endl;
    }
}
