#include<bits/stdc++.h>

using namespace std;

char toROT13(char c)
{
    if (c >= 'a' && c <= 'z')
    {
	return (char) 'a' + ((c-'a'+ 13) % 26);
    }
    else if (c >= 'A' && c <= 'Z')
    {
	return (char) 'A' + ((c-'A'+ 13) % 26);
    }
    else
    {
	return c;
    }
}

int main()
{
    string s;
    getline(cin, s);

    int len = s.length();
    for (int i = 0; i < len; i++)
    {
	cout << toROT13(s[i]);
    }

    cout << endl;
}
