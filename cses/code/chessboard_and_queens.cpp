#include<bits/stdc++.h>

using namespace std;

vector<string> chessboard(8);

bool is_legal(int y, int x, vector<int> down_record, vector<int> up_record, vector<int> x_record)
{
    if (chessboard[y][x] == '.' && x_record[x] == 0 && down_record[x-y+7] == 0 && up_record[x+y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int calculate_ways(int y, vector<int> down_record, vector<int> up_record, vector<int> x_record)
{
    if (y == 8)
    {
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

                ways += calculate_ways(y+1, c_d, c_u, c_x);
            }
        }

        return ways;
    }
}

int main()
{
    string s;

    for (int y = 0; y < 8; y++)
    {
        cin >> chessboard[y];
    }


    vector<int> down_record(15, 0);
    vector<int> up_record(15, 0);
    vector<int> x_record(8, 0);
    int y = 0;

    cout << calculate_ways(y, down_record, up_record, x_record) << endl;
}
