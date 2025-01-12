#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1.length() + s2.length() > s3.length())
    {
        cout << "NO\n";
        return 0;
    }

    string s4 = s3;


    for (int i = 0; i < s1.length(); i++)
    {
        s4[i] = s1[i];
    }

    for (int i = s1.length(); i < s3.length(); i++)
    {
        s4[i] = s2[i-s1.length()];
    }

    sort(s3.begin(), s3.end());
    sort(s4.begin(), s4.end());

    if (s4.compare(s3) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

