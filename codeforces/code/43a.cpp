#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string team1, team2;

    string goals[n];

    for (int i = 0; i < n; i++)
    {
	cin >> goals[i];
    }

    int goal1 = 1;
    int goal2 = 0;

    team1 = goals[0];

    for (int i = 0; i < n; i++)
    {
	if (goals[i].compare(team1) != 0)
	{
	    team2 = goals[i];
	    goal2++;
	}
	else
	{
	    goal1++;
	}
    }

    if (goal1 > goal2)
    {
	cout << team1;
    }
    else
    {
	cout << team2;
    }

}
