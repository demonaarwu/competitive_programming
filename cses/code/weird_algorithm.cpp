#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long n;
    cin >> n;

    cout << n << ' ';

    while (n != 1)
    {
        n = (n % 2 == 0)?(n/2):(3*n+1);
        cout << n << ' ';
    }
}
