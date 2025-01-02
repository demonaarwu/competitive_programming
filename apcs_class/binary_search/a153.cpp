#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

#define ld long double

bool same(ld a, ld b)
{
    return a * b > 0.0;
}

ld f(ld x)
{
    return 2 - exp(x);
}

int main()
{
    ld l = 0.0;
    ld r = 1.0;
    ld mid = (l + r) / 2.0;

    while (abs(f(mid)) >= 1.0E-8)
    {
	if (same(f(mid), f(l))) 
	{
	    l = mid;
	}
	else
	{
	    r = mid;
	}

	mid = (l + r) / 2.0;
    }

    cout << fixed << setprecision(6) << mid << endl;
}
