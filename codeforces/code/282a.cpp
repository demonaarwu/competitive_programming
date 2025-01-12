#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    string s;

    while (n--)
    {
        cin >> s;

        if ((s.compare("X++") == 0) || (s.compare("++X") == 0))
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x << endl;
}
