#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int lo = 0;
    int ro = 0;

    int tmp;

    for (int i = 0; i < n; i++)
    {
	cin >> tmp;

	if (tmp == 1)
	{
	    lo++;
	}

	cin >> tmp;

	if (tmp == 1)
	{
	    ro++;
	}
    }

    cout << min(n-lo, lo) + min(n-ro, ro);
}
