#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio;
    cin.tie(0);
    int n;
    cin >> n;

    set<long long> ns;

    long long k;

    while (n--)
    {
        cin >> k;
        ns.insert(k);
    }

    cout << ns.size() << endl;
}
