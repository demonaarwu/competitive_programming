#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int odd_sum = 0;
    int even_sum = 0;

    int len = s.length();

    if (len % 2 == 0)
    {
	for (int i = 0; i < len/2; i++)
	{
	    odd_sum += (int) s[i*2] - '0';
	    even_sum += (int) s[i*2+1] - '0';
	}
    }
    else
    {
	for (int i = 0; i < len/2; i++)
	{
	    odd_sum += (int) s[i*2] - '0';
	    even_sum += (int) s[i*2+1] - '0';
	}

	odd_sum += (int) s[len-1] - '0';
    }

    cout << abs(odd_sum-even_sum) << endl;
}
