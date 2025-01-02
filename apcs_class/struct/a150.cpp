#include<bits/stdc++.h>

using namespace std;

struct Point
{
    double x;
    double y;
};

double cross(Point a, Point b)
{
    return a.x * b.y - b.x * a.y;
}

int main()
{
    int n;
    cin >> n;

    Point points[n+1];
    for (int i = 0; i < n; i++)
    {
	cin >> points[i].x >> points[i].y;
    }

    points[n] = points[0];
    double area = 0;

    for (int i = 0; i < n; i++)
    {
	area += cross(points[i], points[i+1]);
    }

    cout << setprecision(2) << fixed << fabs(area)/2.0 << endl;
}
