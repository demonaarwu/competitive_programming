#include<bits/stdc++.h>
#include <iterator>
#include <utility>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n)
    {
        vector<int> books(n);
        for (int i = 0; i < n; i++)
        {
            cin >> books[i];
        }
        sort(begin(books), end(books));
        int money;
        cin >> money;
        cin.ignore();

        int left = 0;
        int right = n-1;

        pair<int, int> ans = make_pair(0, 0);
        while (left < right)
        {
            while (books[left] + books[right] != money && left < right)
            {
                if (money > books[left] + books[right])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }

            if (left < right)
            {
                ans = make_pair(books[left], books[right]);
                left += 1;
                right -= 1;
            }
        }

        cout << "Peter should buy books whose prices are " << ans.first << " and " << ans.second << "." << endl;
    }
}
