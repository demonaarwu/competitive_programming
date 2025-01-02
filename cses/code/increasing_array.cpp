#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    long long mini_moves = 0;

    for (int i = 0; i < n-1; i++)
    {
	if (arr[i] > arr[i+1])
	{
	    mini_moves += arr[i] - arr[i+1];
	    arr[i+1] = arr[i];
	}
    }

    cout << mini_moves << endl;
} 
