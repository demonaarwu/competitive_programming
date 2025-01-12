#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int max_l = 1;
    int current_l = 1;

    for (int i = 1; i < len; i++)
    {
        if (s[i-1] == s[i])
        {
            current_l++;

            if (current_l > max_l)
            {
                max_l = current_l;
            }
        }
        else
        {
            current_l = 1;
        }
    }

    cout << max_l << endl;
}
