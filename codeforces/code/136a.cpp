#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> gift(n);

    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        gift[k-1] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << gift[i] << ' ';
    }
    cout << endl;
}
