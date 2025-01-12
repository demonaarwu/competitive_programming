#include<bits/stdc++.h>

using namespace std;

bool is_possible(int a, int b)
{
    if (((a + b) % 3 == 0) && ((abs(2*a - b) % 3 == 0) && (abs(2*b - a) % 3 == 0)) && (b - a <= a) && (a -b <= b))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;


        if (is_possible(a, b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
