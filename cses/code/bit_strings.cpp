#include<bits/stdc++.h>

using namespace std;

long long mod = pow(10, 9) + 7;

long long pow1(long long n, long long times)
{
    if (times == 0)
    {
	return 1;
    }
    else
    {
	if (times % 2 == 0)
	{
	    return (pow1(n, times/2) * pow1(n, times/2)) % mod;
	}
	else
	{
	    return n * pow1(n, times/2) * pow1(n, times/2) % mod;
	}
    }
}

int main()
{
    int n;
    cin >> n;

    cout << pow1(2, n) << endl;
}
