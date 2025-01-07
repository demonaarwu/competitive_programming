#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int over = 0;

    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        over = k>h ? over+1: over;
    }

    cout << over + n << endl;
}
