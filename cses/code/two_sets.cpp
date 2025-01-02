#include<bits/stdc++.h>
 
using namespace std;
 
void print_vector(vector<int> v)
{
    int size = v.size();
 
    for (int i = 0; i < size-1; i++)
    {
	cout << v[i] << ' ';
    }
    
    cout << v[size-1] << '\n';
}
 
int main()
{
    int n;
    cin >> n;
 
    if ((n * (n+1) / 2) % 2 != 0)
    {
	cout << "NO\n";
    }
    else
    {
	vector<int> v1, v2;
 
	if (n % 2 == 0)
	{
	    for (int i = 0; i < n/2; i += 2)
	    {
		v1.push_back(i+1);
		v1.push_back(n-i);
 
		v2.push_back(i+2);
		v2.push_back(n-i-1);
	    }
 
	}
	else
	{
	    v2.push_back(n);
	    n = n - 1;
	    for (int i = 0; i < n/2; i += 2)
	    {
		v1.push_back(i+1);
		v1.push_back(n-i);
	    }
 
	    for (int i = 1; i < n/2; i += 2)
	    {
		v2.push_back(i+1);
		v2.push_back(n-i);
	    }
 
	}
 
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
 
	cout << "YES\n";
	cout << v1.size() << '\n';
	print_vector(v1);
	cout << v2.size() << '\n';
	print_vector(v2);
    }
}
