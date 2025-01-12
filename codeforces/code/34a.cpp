#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mini_i = n-1;
    int mini_v = abs(arr[0] - arr[n-1]);

    for (int i = 0; i < n-1; i++)
    {
        if (mini_v > abs(arr[i] - arr[i+1]))
        {
            mini_v = abs(arr[i] - arr[i+1]);
            mini_i = i;
        }
    }

    if (mini_i == n-1)
    {
        cout << n << " 1\n";
    }
    else
    {
        cout << mini_i+1 << ' ' << mini_i+2 << endl;
    }
}
