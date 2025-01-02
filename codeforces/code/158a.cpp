#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int lst[n];
    for (int i = 0; i < n; i++)
    {
	cin >> lst[i];
    }

    int nu = 0;

    for (int i = 0, j=lst[k-1]; i < n; i++)
    {
	if (lst[i] < j || lst[i] <= 0)
	{
	    cout << nu << endl;
	    return 0;
	}
	else
	{
	    nu++;
	}
    }

    cout << nu << endl;
}
