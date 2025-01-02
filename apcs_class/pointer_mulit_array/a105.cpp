#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int n, m;
    cin >> n >> m;
    int area[m][n];
    memset(area, 0, sizeof(area));

    int t;
    cin >> t;

    pair<int, int> start, end;
    for (int time = 0; time < t; time++)
    {
        cin >> start.first >> start.second >> end.first >> end.second;

        if (start.first == end.first)
        {
            int a = min(start.second, end.second);
            int b = max(start.second, end.second);

            for (int i = a; i <= b; i++)
            {
                area[i-1][start.first-1] = 1;
            }
        }
        else if (start.second == end.second)
        {
            int a = min(start.first, end.first);
            int b = max(start.first, end.first);

            for (int i = a; i <= b; i++)
            {
                area[start.second-1][i-1] = 1;
            }
        }
        else
        {
            int slope = (end.second-start.second)/(end.first-start.first);
            int length = abs(end.first-start.first);
            int start_x = min(start.first, end.first);

            if (slope == 1)
            {
                int start_y = min(start.second, end.second);
                for (int i = 0; i <= length; i++)
                {
                    area[start_y+i-1][start_x+i-1] = 1;
                }
            }
            else
            {
                int start_y = max(start.second, end.second);
                for (int i = 0; i <= length; i++)
                {
                    area[start_y-i-1][start_x+i-1] = 1;
                }

            }
        }
    }

    int trees = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (area[i][j])
            {
                trees++;
            }
        }
    }

    cout << trees << endl;
}
