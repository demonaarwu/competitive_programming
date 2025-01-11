#include <bits/stdc++.h>

using namespace std;

int f(int problems)
{
    return (5+ 5*(problems)) * problems / 2;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int left = 0;
    int right = n;
    int mid;

    if (f(n) <= 240-k)
    {
        cout << n << endl;
        return 0;
    }

    while (left <= right)
    {
        mid = (left+right)/2;

        if (f(mid) <= 240-k && f(mid+1) > 240-k)
        {
            cout << mid << endl;
            return 0;
        }
        else if (f(mid) < 240-k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}
