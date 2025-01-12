#include<bits/stdc++.h>

using namespace std;

unsigned long long count(unsigned long long n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        return n * (n - 1) / 2;
    }
}

int main()
{
    unsigned long long n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        unsigned long long all_combs = count(i*i);
        unsigned long long violated_combs = 4 * (i-1) * (i-2);

        cout << all_combs - violated_combs;
        cout << '\n';
    }

}
