#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(begin(s), end(s));

    vector<string> permutations;

    do
    {
	permutations.push_back(s);
    }
    while (next_permutation(begin(s), end(s)));

    cout << permutations.size() << '\n';

    for (int i = 0, l = permutations.size(); i < l; i++)
    {
	cout << permutations[i] << '\n';
    }
}
