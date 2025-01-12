#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    map<int, int> history;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        history[arr[i]] = i;
    }

    int query_c;
    cin >> query_c;

    unsigned long long m1 = 0;
    unsigned long long m2 = 0;

    int target;

    for (int i = 0; i < query_c; i++)
    {
        cin >> target;

        m1 += history[target]+1;
        m2 += n-history[target];
    }


    cout << m1 << ' ' << m2 << '\n';
}
