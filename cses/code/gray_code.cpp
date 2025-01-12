#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<string>> vs(n+1);
    vs[1] = {"0", "1"};

    for (int i = 2; i <= n; i++)
    {
        vector<string> vi(1 << i);
        for (int j = 0; j < (1 << (i-1)); j++)
        {
            vi[j] = "0";
            vi[j].append(vs[i-1][j]);
            vi[(1 << i)-j-1] = "1";
            vi[(1 << i)-j-1].append(vs[i-1][j]);
        }

        vs[i] = vi;

    }

    for (int i = 0; i < (1 << n); i++)
    {
        cout << vs[n][i] << endl;
    }
}
