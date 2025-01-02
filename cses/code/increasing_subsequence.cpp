#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
    }

    vector<int> lis(n, 1);

    for (int i = 1; i < n; i++)
    {
	for (int j = 0; j < i; j++)
	{
	    if ((lis[i] < lis[j] + 1) && (arr[i] > arr[j]))
	    {
		lis[i] = 1 + lis[j];
	    }
	}

    }

    cout << *max_element(begin(lis), end(lis)) << endl;
}
