#include <bits/stdc++.h>
#include <functional>
#include <queue>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n, m;
    cin >> n >> m;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < m; i++)
    {
	pq.push(0);
    }

    int k, j;
    for (int i = 0; i < n; i++)
    {
	cin >> k;
	j = pq.top() + k;
	pq.pop();
	pq.push(j);
    }

    while (pq.size() > 1)
    {
	pq.pop();
    }

    cout << pq.top() << endl;
}
