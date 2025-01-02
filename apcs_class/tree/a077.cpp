#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int d, i;
    while (t--)
    {
        cin >> d >> i;

        vector<vector<int>> tree(d+1, vector<int> (pow(2, d-1)+1, 0));

        for (int k = 1; k < i; k++)
        {
            int index = 1;
            for (int depth = 1; depth < d; depth++)
            {
                if (!tree[depth][index])
                {
                    tree[depth][index] = 1;
                    index = 2 * index - 1;
                }
                else
                {
                    tree[depth][index] = 0;
                    index *= 2;
                }
            }
        }

        int index = 1;
        for (int depth = 1; depth < d; depth++)
        {
            if (!tree[depth][index])
            {
                index = 2 * index - 1;
            }
            else
            {
                index *= 2;
            }
        }

	cout << pow(2, d-1) + index-1 << endl;

    }
}
