#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int n;
    int c = 1;

    while (cin >> n)
    {
	int arr[n];

	for (int i = 0; i < n; i++)
	{
	    cin >> arr[i];
	}

	int maxProd = arr[0];
	int currMax = arr[0];
	int currMin = arr[0];

	for (int i = 1; i < n; i++)
	{
	    currMax = max(currMax*1LL, max(currMax*arr[i], currMin*arr[i]));
	    currMin = min(currMax*1LL, min(currMax*arr[i], currMin*arr[i]));

	    maxProd = max(maxProd, currMax);
	}
	
	maxProd = maxProd > 0? maxProd: 0;
	cout << "Case #" << c << ": The maximum product is ";
	cout << maxProd;
	cout << ".\n\n";
	c++;
    }
}
