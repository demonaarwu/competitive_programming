#include <bits/stdc++.h>

using namespace std;

struct Player {
    char name;
    map<int, pair<int, int>> coordinate;
    vector<vector<int>> chart;
};

bool is_bingo(vector<vector<int>> chart)
{
    if ((chart[0][0] + chart[1][1] + chart[2][2] + chart[3][3]) == 4)
    {
        return true;
    }

    if ((chart[0][3] + chart[1][2] + chart[2][1] + chart[3][0]) == 4)
    {
        return true;
    }

    for (int i = 0; i < 4; i++)
    {
        if ((chart[0][i] + chart[1][i] + chart[2][i] + chart[3][i]) == 4)
        {
            return true;
        }
        else if ((chart[i][0] + chart[i][1] + chart[i][2] + chart[i][3]) == 4)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    char c;
    int N;
    int num;

    cin >> c >> N;

    vector<Player> Players(N);
    vector<vector<int>> chart(4, vector<int>(4, 0));

    for (int index = 0; index < N; index++)
    {
        cin >> c;
        Players[index].name = c;
        Players[index].chart = chart;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> num;
                Players[index].coordinate[num] = make_pair(i, j);
            }
        }
    }

    cin >> c;

    vector<int> seq(16);

    for (int i = 0; i < 16; i++)
    {
        cin >> seq[i];
    }

    bool end = false;
    for (int a = 0; a < 16 && !end; a++)
    {
        cout << seq[a] << ' ';

        for (int index = 0; index < N; index++)
        {
            pair<int, int> xy = Players[index].coordinate[seq[a]];
            Players[index].chart[xy.first][xy.second] = 1;

            if (is_bingo(Players[index].chart))
            {
                cout << Players[index].name << ' ';
		end = true;
            }
        }
    }
    cout << endl;
}
