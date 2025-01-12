#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n);

int main()
{
    int n, m;

    cin >> n >> m;

    n++;

    while (1)
    {
        if (is_prime(n))
        {
            if (n == m)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }

            return 0;
        }

        n++;
    }
}

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
