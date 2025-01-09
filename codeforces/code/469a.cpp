#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> abiility;
    int a, b;
    cin >> a;
    int k;
    while (a--)
    {
        cin >> k;
        abiility.insert(k);
    }
    cin >> b;
    while (b--)
    {
        cin >> k;
        abiility.insert(k);
    }

    if (abiility.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
}
