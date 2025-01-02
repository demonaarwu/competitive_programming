#include <bits/stdc++.h>

using namespace std;

bool is_legal(vector<int> arr, int size)
{
    stack<int> station;
    int index = 0;
    for (int i = 1; i <= size; i++)
    {
	if (arr[index] == i)
	{
	    index++;
	}
	else
	{
	    station.push(i);
	}

	while (!station.empty() && station.top() == arr[index])
	{
	    station.pop();
	    index++;
	}
    }

    return station.empty();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n, n)
    {
        int tmp;
        while (cin >> tmp, tmp)
        {
	    vector<int> tmp_arr;
            tmp_arr.push_back(tmp);

            for  (int i = 1; i < n; i++)
            {
                cin >> tmp;
                tmp_arr.push_back(tmp);
            }

	    string ans = is_legal(tmp_arr, n) ? "Yes": "No";
	    cout << ans << endl;
        }

	cout << endl;
    }
}
