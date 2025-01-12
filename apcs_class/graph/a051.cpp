#include<bits/stdc++.h>
#include <iterator>

using namespace std;

vector<vector<int>> graph(801, vector<int> (801, 0));
vector<bool> is_visited(801, 0);

void dfs(int point, int length)
{
    for (int i = 1; i <= length; i++)
    {
        if (graph[point][i] && !is_visited[i])
        {
            is_visited[i] = 1;
            dfs(i, length);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    while (cin >> n >> m)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                graph[i][j] = 0;
            }
        }

        fill(begin(is_visited), end(is_visited), 0);

        int start, end;
        for (int i = 0; i < m; i++)
        {
            cin >> start >> end;
            graph[start][end] = 1;
        }

        int a, b;
        cin >> a >> b;

        dfs(a, n);

        if (is_visited[b])
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

}
