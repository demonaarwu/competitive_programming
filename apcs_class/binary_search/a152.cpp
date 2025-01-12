#include <bits/stdc++.h>

using namespace std;

vector<int> arr(10001);
int x;
void search(int l, int r, int step)
{
    if (l > r)
    {
        cout << "not found " << step << endl;
        return;
    }
    int mid = l + (r - l) /2;
    step++;

    if (arr[mid] == x)
    {
        cout << mid << " " << step << endl;
    }
    else if (arr[mid] > x)
    {
        search(l,  mid-1, step);
    }
    else
    {
        search(mid+1, r, step);
    }
}

signed main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    search(0, n-1, 0);
}
