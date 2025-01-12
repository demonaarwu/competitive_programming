#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    int n_five_f = n/5;
    int n_of_five = n_five_f;

    for (int i = 1; pow(5, i) <= n; i++)
    {
        n_of_five += n_five_f / pow(5, i);
    }

    cout << n_of_five << endl;
}
