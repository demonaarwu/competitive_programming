#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;



int main()
{
    string s;

    while (getline(cin, s))
    {
        stack<int> value;
        int length = s.length();

        for (int i = 0; i < length; i++)
        {
            if (s[i] == '+')
            {
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();

                value.push(a+b);
            }
            else if (s[i] == '-')
            {
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();

                value.push(b-a);

            }
            else if (s[i] == '*')
            {
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();

                value.push(a*b);

            }
            else if (s[i] == '/')
            {
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();

                value.push(b/a);

            }
            else if (s[i] == '%')
            {
                int a = value.top();
                value.pop();
                int b = value.top();
                value.pop();

                value.push(b % a);
            }
            else
            {
                value.push((int) s[i]-'0');
            }
        }

        cout << value.top() << endl;
    }
}
