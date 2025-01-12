#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    queue<pair<int, int>> children;
    int child;

    for (int i = 0; i < n; i++)
    {
        cin >> child;

        children.push(make_pair(i, child));
    }

    while (children.size() > 1)
    {
        int n = children.front().first;
        int tmp = children.front().second;

        if (tmp > m)
        {
            children.pop();
            children.push(make_pair(n, tmp-m));
        }
        else
        {
            children.pop();
        }
    }

    cout << children.front().first+1;
}
