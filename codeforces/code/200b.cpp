#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int k;

    for (int i = 0; i < n; i++)
    {
	cin >> k;
	sum += k;
    }

    cout << (double) sum / n;
}
