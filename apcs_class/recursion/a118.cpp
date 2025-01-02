#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 != 0)
    {
	cout << 0 << endl;
    }
    else
    {
	long long k = (long long) pow(2, n/2-1);
	for (int i = 0; i < 3; i++)
	{
	    cout << k << ' ';
	}

	cout << k << endl;
    }
}
