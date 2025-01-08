#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << "I hate ";

    for (int i = 0; i < n-1; i++)
    {
        cout << "that ";
        if (i % 2 == 0)
        {
            cout << "I love ";
        }
        else
        {
            cout << "I hate ";
        }
    }

    cout << "it" << endl;
}
