#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
	bool is_finish = false;
	int time = 0;
	int n, m;
	int priority;
	cin >> n >> m;

	queue<int> qu;
	priority_queue<int> pq;

	int tmp;
	for (int i = 0; i < n; i++)
	{
	    cin >> tmp;
	    qu.push(tmp);
	    pq.push(tmp);
	    if (i == m)
	    {
		priority = tmp;
	    }
	} 

	while (!is_finish)
	{
	    if (m == 0)
	    {
		if (pq.top() > priority)
		{
		    qu.push(qu.front());
		    qu.pop();
		    m = qu.size() - 1;
		}
		else
		{
		    is_finish = true;
		    time++;
		}
	    }
	    else
	    {
		if (qu.front() == pq.top())
		{
		    qu.pop();
		    pq.pop();
		    time++;
		}
		else
		{
		    qu.push(qu.front());
		    qu.pop();
		}
		m--;
	    }
	}

	cout << time << endl;
    }
}
