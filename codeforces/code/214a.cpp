#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int mi = min(n, m);
    int pairs = 0;

    for (int i = 0; i <= mi; i++)
    {
	for (int j = 0; j <= mi; j++)
	{
	    if ((i*i + j == n) && (i + j*j == m))
	    {
		pairs++;
	    }
	}
    }

    cout << pairs;
}
