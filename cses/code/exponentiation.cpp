#include<bits/stdc++.h>

using namespace std;

#define int long long

int mod = (int) 1e9 + 7;

int expo(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        if (b % 2 == 0)
        {
            return expo((a*a) % mod, b/2) % mod;
        }
        else
        {
            return (a * expo((a*a) % mod, b/2)) % mod;
        }
    }
}

signed main()
{
    int n;
    cin >> n;

    int a, b;
    while (n--)
    {
        cin >> a >> b;
        cout << expo(a, b) << endl;
    }
}
