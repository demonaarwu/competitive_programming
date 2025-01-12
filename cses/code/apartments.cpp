#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    vector<int> apartments(m);
    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }
    sort(apartments.begin(), apartments.end());

    int count = 0;
    int start = 0;
    vector<int> access(n, 0);
    for (int i = 0; i < m; i++)
    {
        auto left = upper_bound(arr.begin()+ start, arr.end(), apartments[i]-k-1);

        if (left != arr.end())
        {
            int index = left-arr.begin();

            if (abs(arr[index]-apartments[i]) <= k && !access[index])
            {
                count++;
                access[index] = 1;
                start = index+1;
            }
        }
    }

    cout << count << endl;
}
