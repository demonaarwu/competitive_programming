#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a1, a2, a3;

    int problems = 0;

    while (n--)
    {
        cin >> a1 >> a2 >> a3;

        if ((a1 + a2 + a3) >= 2)
        {
            problems += 1;
        }
    }

    cout << problems << '\n';
}
