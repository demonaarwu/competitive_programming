#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int cost = w * (k + k*w) / 2;

    if (cost <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << cost-n << endl;
    }
}
