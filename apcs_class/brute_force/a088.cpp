#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int n;
    int c = 0;

    while (cin >> n)
    {
        c++;
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
            if (arr[i] < 0) swap(currMax, currMin);
            currMax = max(arr[i], currMax * arr[i]);
            currMin = min(arr[i], currMin * arr[i]);
            maxProd = max(maxProd, currMax);
        }

        maxProd = maxProd > 0? maxProd: 0;
        cout << "Case #" << c << ": The maximum product is " << maxProd << ".\n\n";
    }
}
