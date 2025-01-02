#include<bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
signed main()
{
    ios::sync_with_stdio(false); cin.tie(0);
 
    int x, n;
    cin >> x >> n;
 
    priority_queue<int, vector<int>, greater<int>> pq;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        pq.push(tmp);
    }
 
    int cost = 0;
 
    while (pq.size() >= 2)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
 
        cost += (a+b);
        pq.push(a+b);
    }
 
    cout << cost << endl;
}
