#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> chessboard(8, vector<int>(8, 0));

long long max_score;

bool is_legal(int y, int x, vector<int> down_record, vector<int> up_record, vector<int> x_record)
{
    if (x_record[x] == 0 && down_record[x-y+7] == 0 && up_record[x+y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int calculate_ways(int y, vector<int> down_record, vector<int> up_record, vector<int> x_record, long long score)
{
    if (y == 8)
    {
        max_score = max(max_score, score);
        return 1;
    }
    else
    {
        int ways = 0;

        for (int x = 0; x < 8; x++)
        {
            if (is_legal(y, x, down_record, up_record, x_record))
            {
                vector<int> c_x = x_record;
                vector<int> c_d = down_record;
                vector<int> c_u = up_record;
                c_x[x] = 1;
                c_d[x-y+7] = 1;
                c_u[x+y] = 1;

                ways += calculate_ways(y+1, c_d, c_u, c_x, score + chessboard[y][x]);
            }
        }

        return ways;
    }
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        max_score = 0;
        for (int y = 0; y < 8; y++)
        {
            for (int x = 0; x < 8; x++)
            {
                cin >> chessboard[y][x];
            }
        }
        vector<int> down_record(15, 0);
        vector<int> up_record(15, 0);
        vector<int> x_record(8, 0);
        int y = 0;

        int ways = calculate_ways(y, down_record, up_record, x_record, 0);
        cout << max_score << endl;
    }
}
