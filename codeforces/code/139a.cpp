#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int week[7];
    for (int i = 0; i < 7; i++)
    {
	cin >> week[i];
    }

    int day = 0;

    while (n > 0)
    {
	if (n-week[day % 7] <= 0)
	{
	    cout << (day % 7) + 1 << endl;

	    return 0;
	}
	else
	{
	    n = n - week[day % 7];
	    day++;
	}
    }
}
