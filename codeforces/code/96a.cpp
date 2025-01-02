#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int repeat = 1;

    for (int i = 1, n = s.length(); i < n; i++)
    {
	if (s[i] == s[i-1])
	{
	    repeat++;

	    if (repeat == 7)
	    {
		cout << "YES\n";
		return 0;
	    }
	}
	else
	{
	    repeat = 1;
	}
    }

    cout << "NO\n";
}
