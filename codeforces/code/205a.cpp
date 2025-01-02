#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long  distance;
    long long minimum_city = 0;
    long long minimum_value = pow(10, 9) + 1;
    int repeat = 0;

    for (int i = 0; i < n; i++)
    {
	cin >> distance;

	if (distance < minimum_value)
	{
	    minimum_city = i+1;
	    minimum_value = distance;
	    repeat = 0;
	}
	else if (distance == minimum_value)
	{
	    repeat++;
	}
    }

    if (repeat == 0)
    {
	cout << minimum_city;
    }
    else
    {
	cout << "Still Rozdil\n";
    }

}
