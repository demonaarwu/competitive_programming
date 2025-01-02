#include <bits/stdc++.h>

using namespace std;

bool is_legal(string s);

int parse();

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
	string s;
	cin >> s;
    }
}

bool is_comma_match(string s)
{
    int len = s.length();

    if (!len)
    {
	return true;
    }
    else
    {
	char last = s[0];

	for (int i = 1; 1 < len; i++)
	{
	    if (s[i] == ',')
	    {
		if (!(last == ')') || !(last >= '0' && last <= '9'))
		{
		    return false;
		}
	    }
	}
    }

    return true;
}

bool is_parenmatch(string s)
{
    int len = s.length();
    int left_count = 0;

    for (int i = 0; i < len; i++)
    {
	if (s[i] == '(')
	{
	    left_count++;
	}
	else if (s[i] == ')')
	{
	    if (left_count == 0)
	    {
		return false;
	    }
	    else
	    {
		left_count--;
	    }
	}
    }

    return left_count == 0;
}

bool is_legal(string s)
{
    if ()
}


