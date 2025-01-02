#include<bits/stdc++.h>
#include<set>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    set<char> letters;

    for (int i = 0; i < s.length(); i++)
    {
	if (s[i] - 'a' >= 0 && s[i] - 'z' <= 0)
	{
	    letters.insert(s[i]);
	}
    }

    cout << letters.size();
}
