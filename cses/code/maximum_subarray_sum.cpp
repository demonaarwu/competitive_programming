#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maximum_sum = *max_element(arr, arr+n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = max(sum+arr[i], (int) 0);
        maximum_sum = max(sum, maximum_sum);
    }


    cout << maximum_sum << endl;
}
