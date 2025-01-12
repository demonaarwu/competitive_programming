#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int maximum = 0;
    int minimum = 0;

    int tmp;

    priority_queue<int> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;

    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        pq1.push(tmp);
        pq2.push(tmp);
    }

    for (int i = 0; i < n; i++)
    {
        tmp = pq1.top();
        pq1.pop();
        maximum += tmp;
        pq1.push(tmp-1);

        tmp = pq2.top();
        pq2.pop();

        while (tmp <= 0)
        {
            tmp = pq2.top();
            pq2.pop();
        }

        minimum += tmp;
        pq2.push(tmp-1);
    }

    cout << maximum << ' ' << minimum;
}
