#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int fives = 0;
    int zeros = 0;

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;

        if (k == 5)
        {
            fives++;
        }
        else
        {
            zeros++;
        }
    }

    if (zeros == 0)
    {
        cout << -1;
    }
    else if (fives < 9)
    {
        cout << 0;
    }
    else
    {
        fives = fives - (fives % 9);

        for (int i = 0; i < fives; i++)
        {
            cout << 5;
        }

        for (int i = 0; i < zeros; i++)
        {
            cout << 0;
        }
    }
}
