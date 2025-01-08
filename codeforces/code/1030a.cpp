#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    while (n--) {
        cin >> k;
        if (k) {
            cout << "HARD\n";
            return 0;
        }
    }

    cout << "EASY\n";
}
