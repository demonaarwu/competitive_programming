#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    c = tolower(c);

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
	s[i] = tolower(s[i]);
    }
    vector<int> distances;

    int last;
    bool found = false;
    for (int i = 0; i < n && !found; i++)
    {
	if (s[i] == c)
	{
	    last = i;
	    found = true;
	}
    }
    for (int i = last+1; i < n; i++)
    {
	if (s[i] == s[last])
	{
	    distances.push_back(i-last);
	    last = i;
	}
    }

    int len = distances.size();
    for (int i = 0; i < len-1; i++)
    {
	cout << distances[i] << ' ';
    }

    cout << distances[len-1] << endl;
}
