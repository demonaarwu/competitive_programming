#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n != 0)
    {
        int row_sum[n] = {0};
        int column_sum[n] = {0};
        int matrix[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
                row_sum[i] += matrix[i][j];
                column_sum[j] += matrix[i][j];
            }
        }

        int err_row = -1;
        int err_column = -1;
        bool more_than_one = false;

        for (int i = 0; i < n && !more_than_one; i++)
        {
            if (row_sum[i] % 2 != 0)
            {
                if (err_row == -1)
                {
                    err_row = i;
                }
                else
                {
                    more_than_one = true;
                }
            }

            if (column_sum[i] % 2 != 0)
            {
                if (err_column == -1)
                {
                    err_column = i;
                }
                else
                {
                    more_than_one = true;
                }
            }

        }

        if (err_row+err_column == -2)
        {
            cout << "OK";
        }
        else if (err_row == -1 || err_column == -1 || more_than_one)
        {
            cout << "Corrupt";
        }
        else
        {
            cout << "Change bit (" << err_row+1 << "," << err_column+1 << ")";
        }

        cout << endl;

        cin >> n;
    }
}
