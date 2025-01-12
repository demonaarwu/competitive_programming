#include<bits/stdc++.h>

using namespace std;

long long tr_sum(vector<long long> arr, int n, long long x)
{
    unsigned long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += min(x, arr[i]);
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long n, m;
    cin >> n >> m;

    unsigned long long sum = 0;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum <= m)
    {
        cout << "infinite\n";
    }
    else
    {
        unsigned long long largest = *max_element(arr.begin(), arr.end());

        unsigned long long low = m/n;
        unsigned long long high = largest;

        while (low <= high)
        {
            unsigned long long mid = low + (high - low) / 2;

            if (tr_sum(arr, n, mid+1) > m && tr_sum(arr, n, mid) <= m)
            {
                cout << mid << endl;
                return 0;
            }
            else if (tr_sum(arr, n, mid) > m)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}
