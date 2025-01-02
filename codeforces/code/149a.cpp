#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    int arr[12];

    for (int i = 0; i < 12; i++)
    {
	cin >> arr[i];
    }

    sort(arr, arr+12, greater<int>());
    
    int months = 0;
    int sum = 0;
    for (int i = 0; i < 12 && sum < k; i++)
    {
	months++;
	sum += arr[i];
    }

    if (k > sum)
    {
	cout << -1;
    }
    else
    {
	cout << months;
    }
}
