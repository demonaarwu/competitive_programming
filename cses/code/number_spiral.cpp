#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int y, x;

    cin >> n;
    while (n--)
    {
        cin >> y >> x;

        long long size = max(y, x);
        unsigned long long right_corner = 1 + size * (size - 1);

        if (size % 2 == 0)
        {
            cout << right_corner + (y - x);
        }
        else
        {
            cout << right_corner + (x - y);
        }

        cout << '\n';
    }
}
