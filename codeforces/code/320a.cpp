#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin >> n;

    while (n > 1)
    {
        if (n % 10 == 1)
        {
            n = (n-n%10) / 10;
        }
        else if (n % 10 == 4)
        {
            long int tmp = (n-n%10) / 10;
            if (tmp % 10 == 4)
            {
                tmp = (tmp-tmp%10) / 10;

                if (tmp % 10 != 1)
                {
                    cout << "NO\n";
                    return 0;
                }
                else
                {
                    n = tmp;
                }
            }
            else if (tmp % 10 != 1)
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                n = tmp;
            }
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}
