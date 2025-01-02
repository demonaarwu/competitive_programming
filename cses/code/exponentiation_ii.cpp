#include<bits/stdc++.h>

using namespace std;

#define int long long

int mod = (int) 1e9+7;

int fast_pow(int a, int b)
{
    if (b == 0)
    {
	return 1;
    }
    else
    {
	if (b % 2 == 0)
	{
	    return fast_pow((a*a) % mod, b/2) % mod;
	}
	else
	{
	    return (fast_pow((a*a) % mod, b/2) * a) % mod;
	}
    }
}

int f(int a, int b, int c)
{
    return fast_pow(a, fast_pow(b, c) % mod) % mod;
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    
    int a, b, c;
    while (n--)
    {
	cin >> a >> b >> c;
	cout << f(a, b, c) << endl;
    }
}
