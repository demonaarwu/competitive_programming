#include<bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w % 2 == 0)
    {
	if (w >= 4)
	{
	    cout << "YES\n";
	}
	else
	{
	    cout << "NO\n";
	}
    }
    else
    {
	cout << "NO\n";
    }
}
