#include<bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 4 != 0)
    {
        cout << 365 << endl;
    }
    else
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << 366 << endl;
            }
            else
            {
                cout << 365 << endl;
            }
        }
        else
        {
            cout << 366 << endl;
        }
    }
}
