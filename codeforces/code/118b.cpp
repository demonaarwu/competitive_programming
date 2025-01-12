#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2*n+1; i++)
    {
        int k = n - abs(n-i);

        for (int j = 0; j < abs(n-i); j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < k * 2; j++)
        {
            cout << (k - abs(k-j));
            cout << ' ';
        }

        cout << 0;

        cout << endl;
    }
}
