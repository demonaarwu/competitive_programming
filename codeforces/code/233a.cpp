#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    if (n % 2 != 0)
    {
	cout << "-1\n";
    }
    else
    {
	for (int i = 0; i < n; i++)
	{
	    if (i % 2 == 0)
	    {
		cout << 2 + 2 * (i / 2);
	    }
	    else 
	    {
		cout << 1 + 2 * (i / 2);
	    }
	    cout << ' ';
	}
	
	cout << '\n';
    }
}
