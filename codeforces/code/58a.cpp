#include<bits/stdc++.h>

using namespace std;

string s;

int first_appear(char c, int low)
{
    for (int i = low; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            return i;
        }
    }

    return 0;
}


int main()
{
    cin >> s;


    int f_h = first_appear('h', 0);
    int f_e = first_appear('e', f_h);
    int f_l = first_appear('l', f_e);
    int s_l = first_appear('l', f_l+1);
    int f_o = first_appear('o', s_l);

    if (f_o > s_l && s_l > f_l && f_l > f_e && f_e > f_h)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
