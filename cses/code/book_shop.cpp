#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    int n, m;
    cin >> n >> m;

    int weight[n];
    int value[n];

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }


    vector<vector<int>> knap(n, vector<int>(m+1));

    for (int j = 0; j < m+1; j++)
    {
        if (weight[0] <= j)
        {
            knap[0][j] = value[0];
        }
        else
        {
            knap[0][j] = 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            if (weight[i] <= j)
            {
                knap[i][j] = max(knap[i-1][j], value[i] + knap[i-1][j-weight[i]]);
            }
            else
            {
                knap[i][j] = knap[i-1][j];
            }
        }
    } 

    cout << knap[n-1][m] << endl;
}
