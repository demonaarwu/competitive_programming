#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    long long minimum = sum;
    for (int j = 0; j < (1 << n); j++)
    {
        long long sum_s = 0;
        for (int i = 0; i < n; i++)
        {

            if ((1 << i) & j)
            {
                sum_s += arr[i];
            }


        }

        if (abs((sum - sum_s) - sum_s) <= minimum)
        {
            minimum = abs((sum - sum_s) - sum_s);
        }
    }

    cout << minimum << endl;
}
