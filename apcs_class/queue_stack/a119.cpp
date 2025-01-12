#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        stack<char> parens;
        int len = s.length();

        int p_c = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(')
            {
                parens.push('(');
            }
            else
            {
                if (parens.empty())
                {
                    p_c = 0;
                    break;
                }
                else
                {
                    if (parens.top() == '(')
                    {
                        parens.pop();
                        p_c++;
                    }
                    else
                    {
                        p_c = 0;
                        break;
                    }
                }
            }
        }
        if (!parens.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            cout << p_c << endl;
        }
    }
}
