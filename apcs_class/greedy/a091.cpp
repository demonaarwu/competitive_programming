#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    while (n != 0)
    {
        priority_queue<int, vector<int>, greater<int>> pq;

        int m;
        for (int i = 0; i < n; i++)
        {
            cin >> m;
            pq.push(m);
        }

        int cost = 0;

        while (pq.size() >= 2)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();

            cost += (a + b);

            pq.push(a+b);
        }

        cout << cost << endl;

        cin >> n;
    }
}
