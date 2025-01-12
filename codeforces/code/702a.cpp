#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> lis(n);

    lis[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i-1])
        {
            lis[i] = lis[i-1] + 1;
        }
        else
        {
            lis[i] = 1;
        }
    }


    cout << *max_element(begin(lis), end(lis)) << "\n";

}
