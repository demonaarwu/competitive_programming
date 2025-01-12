#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    priority_queue<int> pq;
    map<int, int> mp;
    int tmp;

    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        pq.push(tmp);
        mp[tmp] = i;
    }

    pq.pop();

    cout << mp[pq.top()]+1 << endl;
}
