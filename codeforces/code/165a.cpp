#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, pair<int, int>> x;
    map<int, pair<int, int>> y;

    pair<int, int> points[n];
    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;

        if (x.find(points[i].first) == x.end())
        {
            x[points[i].first] = make_pair(points[i].second, points[i].second);
        }
        else
        {
            if (x[points[i].first].first > points[i].second)
            {
                x[points[i].first].first = points[i].second;
            }
            else if (x[points[i].first].second < points[i].second)
            {
                x[points[i].first].second = points[i].second;
            }
        }

        if (y.find(points[i].second) == y.end())
        {
            y[points[i].second] = make_pair(points[i].first, points[i].first);
        }
        else
        {
            if (y[points[i].second].first > points[i].first)
            {
                y[points[i].second].first = points[i].first;
            }
            else if (y[points[i].second].second < points[i].first)
            {
                y[points[i].second].second = points[i].first;
            }
        }

    }

    int supercentral_points = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[points[i].first].first < points[i].second && x[points[i].first].second > points[i].second)
        {
            if (y[points[i].second].first < points[i].first && y[points[i].second].second > points[i].first)
            {
                supercentral_points++;
            }
        }
    }

    cout << supercentral_points;

}
