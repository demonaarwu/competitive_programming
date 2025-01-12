#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long n;
    cin >> n;

    unsigned long long t;
    unsigned long long k = n * (n+1)/2;
    for (int i = 0; i < n-1; i++)
    {
        cin >> t;
        k -= t;
    }

    cout << k << endl;
}
