#include <iostream>

using namespace std;

int main()
{
    long long n, q;

    cin >> n >> q;

    long long prefix_sum[n+1];
    long lst[n];

    for (int i = 0; i < n; i++)
    {
        cin >> lst[i];
    }

    prefix_sum[0] = 0;
    for (int k = 1; k <= n; k++)
    {
        prefix_sum[k] = prefix_sum[k-1] + lst[k-1];
    }

    while (q--)
    {
        long a, b;
        cin >> a >> b;

        cout << prefix_sum[b] - prefix_sum[a-1] << endl;
    }

}
