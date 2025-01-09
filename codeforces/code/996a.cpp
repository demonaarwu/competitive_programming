#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int coins = 0;
    vector<int> coins_kind = {1, 5, 10, 20, 100};

    for (int i = 4; i >= 0; i--)
    {
        coins += (n/coins_kind[i]);
        n = n % coins_kind[i];
    }

    cout << coins << endl;
}
