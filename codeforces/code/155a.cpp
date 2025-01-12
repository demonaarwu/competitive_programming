#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    int amazing = 0;

    int low = k;
    int high = k;

    for (int i = 1; i < n; i++)
    {
        cin >> k;

        if (k > high)
        {
            high = k;
            amazing += 1;
        }
        else if (k < low)
        {
            low = k;
            amazing += 1;
        }
    }

    cout << amazing;
}
