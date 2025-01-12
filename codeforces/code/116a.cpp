#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int high = 0;
    int now = 0;
    int out;
    int in;

    for (int i = 0; i < n; i++)
    {
        cin >> out >> in;
        now = now + in - out;

        if (in > out)
        {

            if (now > high)
            {
                high = now;
            }
        }
    }

    cout << high;
}
