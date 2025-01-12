#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_sum = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum < 0)
        {
            sum = 0;
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;
}
