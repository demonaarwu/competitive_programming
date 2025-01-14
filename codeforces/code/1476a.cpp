#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int t;
    cin >> t;

    long long n, k;

    while (t--)
    {
        cin >> n >> k;

        if (n > k)
        {
            cout << 1 + (n%k != 0) << '\n';
        }
        else if (n == k)
        {
            cout << 1 << '\n';
        }
        else
        {
            long long a = -1;

            for (int b = k/2; b >= 1; b /= 2)
            {
                while ((a+b)*n < k)
                {
                    a += b;
                }
            }

            cout << a+1 << '\n';
        }

    }
}
