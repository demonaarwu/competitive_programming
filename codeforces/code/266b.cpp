#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    string s0 = s;

    for (int t0 = 0; t0 < t; t0++)
    {
	for (int i = 0; i < n-1; i++)
	{
	    if ((s[i] == 'B') && (s[i+1] == 'G'))
	    {
		s0[i] = 'G';
		s0[i+1] = 'B';
	    }
	}

	s = s0;
    }

    cout << s << '\n';
}
