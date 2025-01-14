#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> magnets(n);
    for (int i = 0; i < n; i++)
    {
        cin >> magnets[i];
    }

    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (magnets[i] != magnets[i-1])
        {
            count++;
        }
    }

    cout << count << endl;
}
