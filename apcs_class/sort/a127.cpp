#include<iostream>
#include<algorithm>

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
    
    sort(arr, arr+n);
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i-1] != 1)
        {
            cout << arr[0] << ' ' << arr[n-1] << " no\n";
            return 0;
        }
    }
    
    cout << arr[0] << ' ' << arr[n-1] << " yes\n";
}
