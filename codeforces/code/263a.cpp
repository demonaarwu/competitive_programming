#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j;

    int n;

    for (int x = 0; x < 5; x++)
    {
	for (int y = 0; y < 5; y++)
	{
	    cin >> n;

	    if (n == 1)
	    {
		i = x;
		j = y;
		break;
	    }
	}
    }

    cout << abs(2-i) + abs(2-j) << "\n";
}
