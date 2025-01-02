#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;

    vector<int> numbers;

    for (int i = 0; i < s.length(); i++)
    {
	if (s[i] != '+')
	{
	    numbers.push_back(s[i] - '0');
	}
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size()-1; i++)
    {
	cout << numbers[i] << '+';
    }

    cout << numbers[numbers.size()-1] << '\n';
}
