#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[5][5];

    for (int i = 1; i < 4; i++)
    {
	for (int j = 1; j < 4; j++)
	{
	    arr[i][j] = 1;
	}
    }

    int n;
    for (int i = 1; i < 4; i++)
    {
	for (int j = 1; j < 4; j++)
	{
	    cin >> n;

	    if (n % 2 == 1)
	    {
		arr[i][j] = (arr[i][j] + 1) % 2;
		arr[i-1][j] = (arr[i-1][j] + 1) % 2;
		arr[i+1][j] = (arr[i+1][j] + 1) % 2;
		arr[i][j-1] = (arr[i][j-1] + 1) % 2;
		arr[i][j+1] = (arr[i][j+1] + 1) % 2;
	    }
	}
    }

    for (int i = 1; i < 4; i++)
    {
	for (int j = 1; j < 4; j++)
	{
	    cout << arr[i][j];
	}

	cout << "\n";
    }
}
