#include<bits/stdc++.h>

using namespace std;

bool is_boom(vector<vector<int>> plate)
{
    bool boom = false;

    if (plate[0][0] == plate[1][1] == plate[2][2] == plate[3][3] == 1)
    {
        return true;
    }
    else if (plate[0][3] == plate[1][2] == plate[2][1] == plate[3][0] == 1)
    {
        return true;
    }

    for (int i = 0; i < 4 && !is_boom; i++)
    {
        if (plate[i][0] == plate[i][1] == plate[i][2] == plate[i][3] == 1)
        {
            is_boom = true;
        }

        if (plate[0][i] == plate[1][i] == plate[2][i] == plate[3][i] == 1)
        {
            is_boom = true;
        }
    }

    return is_boom;
}

pair<int, int> find_index(vector<vector<int>> plate, int n)
{
    pair<int, int> index = make_pair(0, 0);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (plate[i][j] == n)
            {
                index.first = i;
                index.second = j;

                return index;
            }
        }
    }

    return index;
}

int main()
{
    char c;
    int n;
    cin >> c >> n;

    vector<char> players_id(n);
    vector<vector<int>> players(n, vector<int>(16));

    for (int i = 0; i < n; i++)
    {
        cin >> players_id[i];

        for (int j = 0; i < 16; i++)
        {
            cin >> players_id[i][j];
        }
    }

    cin >> c;
    vector<int, int>
}
