#include<bits/stdc++.h>

using namespace std;

queue<pair<int, int>> moves;

void move(int a, int b)
{
    moves.push(make_pair(a, b));
}

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        move(a, c);
    }
    else
    {
        hanoi(n-1, a, c, b);
        move(a, c);
        hanoi(n-1, b, a, c);
    }
}

int main()
{
    int n;
    cin >> n;

    hanoi(n, 1, 2, 3);
    cout << moves.size() << endl;

    int counts = moves.size();

    for (int i = 0; i < counts; i++)
    {
        pair<int, int> move = moves.front();

        cout << move.first << ' ' << move.second << '\n';

        moves.pop();
    }
}
