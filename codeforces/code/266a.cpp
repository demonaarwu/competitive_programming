#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int minimum = 0;

    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == s[i+1])
        {
            minimum++;
        }
    }

    cout << minimum;
}
