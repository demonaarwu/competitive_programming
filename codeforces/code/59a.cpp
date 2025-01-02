#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int length = s.length();

    int lower_c = 0;
    int upper_c = 0;

    for (int i = 0; i < length; i++)
    {
	if (islower(s[i]))
	{
	    lower_c += 1;
	}
	else
	{
	    upper_c += 1;
	}
    }

    if (lower_c >= upper_c)
    {
	for (int i = 0; i < length; i++)
	{
	    cout << (char) tolower(s[i]);
	}
    }
    else
    {
	for (int i = 0; i < length; i++)
	{
	    cout << (char) toupper(s[i]);
	}
    }
}
