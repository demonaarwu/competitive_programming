#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    map<string, int> team_table;
    string member;

    for (int i = 0; i < t; i++)
    {
        int member_count;
        cin >> member_count;

        for (int m = 0; m < member_count; m++)
        {
            cin >> member;
            team_table[member]= i;
        }
    }

    deque<pair<int, queue<string>>> line;

    string command;
    cin >> command;

    while (command != "STOP")
    {
        if (command == "ENQUEUE")
        {
            cin >> member;

            bool in = false;
            for (auto team:line)
            {
                if (in)
                {
                    break;
                }
                if (team.first == team_table[member])
                {
                    team.second.push(member);
                    in = true;
                }
            }

            if (!in)
            {
                line.push_back(pair<int, queue<string>> {team_table[member], queue<string> ()});
                line.back().second.push(member);
            }
        }
        else
        {
            cout << line.front().second.front() << endl;
            line.front().second.pop();
            if (line.front().second.empty())
            {
                line.pop_front();
            }
        }
        cin >> command;
    }

}

int main()
{
    int t;

    while (cin >> t)
    {
        solve(t);
    }
}
