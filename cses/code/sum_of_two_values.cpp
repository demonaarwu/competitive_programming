#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n, x;
    cin >> n >> x;
 
    int arr[n];
    map<int, vector<int>> records;
    for (int i = 0; i < n; i++)
    {
	cin >> arr[i];
	records[arr[i]].push_back(i+1);
    }
 
    sort(arr, arr+n);
 
    int left = 0;
    int right = n-1;
    
    while (left < right)
    {
	if (arr[left]+arr[right] > x)
	{
	    right--;
	}
	else if (arr[left]+arr[right] < x)
	{
	    left++;
	}
	else
	{
	    if (arr[left] == arr[right])
	    {
		cout << records[arr[left]][0] << ' ' << records[arr[right]][1] << '\n';
	    }
	    else
	    {
		pair<int, int> two = make_pair(records[arr[left]][0], records[arr[right]][0]);
		cout << min(two.first, two.second) << ' ' << max(two.first, two.second) << '\n';
	    }
	    return 0;
	}
    }
 
    cout << "IMPOSSIBLE\n";
}
