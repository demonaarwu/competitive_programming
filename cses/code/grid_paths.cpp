#include<bits/stdc++.h>

using namespace std;

#pragma GCC optimize("Ofast")

unsigned int ways = 0;
char path[50];

bool grids[9][9] = {0};

unordered_map<char, short> operations;

short dx[] = {0, 0, -1, 1};
short dy[] = {-1, 1, 0, 0};

bool is_stuck(short x, short y)
{
    if (grids[x][y+1] && grids[x][y-1] && !grids[x+1][y] && !grids[x-1][y])
    {
        return true;
    }
    else if (!grids[x][y+1] && !grids[x][y-1] && grids[x+1][y] && grids[x-1][y])
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_legal(short x, short y)
{
    if (grids[x][y] || is_stuck(x, y))
    {
        return false;
    }
    else
    {
        return true;
    }
}


void enumerate(short n, short x, short y)
{
    if (n == 48)
    {
        if (y == 7 && x == 1)
        {
            ways += 1;
        }
        else
        {
            return;
        }
    }
    else
    {
        if ((y == 7 && x == 1))
        {
            return;
        }
        if (path[n] == '?')
        {
            for (short i = 0; i < 4; i++)
            {
                if (is_legal(x+dx[i], y+dy[i]))
                {
                    grids[x+dx[i]][y+dy[i]] = 1;
                    enumerate(n+1, x+dx[i], y+dy[i]);
                    grids[x+dx[i]][y+dy[i]] = 0;
                }
            }
        }
        else
        {
            short operation = operations[path[n]];

            if (is_legal(x+dx[operation], y+dy[operation]))
            {
                grids[x+dx[operation]][y+dy[operation]] = 1;
                enumerate(n+1, x+dx[operation], y+dy[operation]);
                grids[x+dx[operation]][y+dy[operation]] = 0;
            }
        }
    }
}

signed main()
{
    cin >> path;

    for (short i = 0; i < 9; i++)
    {
        grids[i][8] = 1;
        grids[8][i] = 1;
        grids[0][i] = 1;
        grids[i][0] = 1;
    }

    grids[1][1] = 1;
    operations['U'] = 0;
    operations['D'] = 1;
    operations['L'] = 2;
    operations['R'] = 3;
    enumerate(0, 1, 1);

    cout << ways << endl;
}
