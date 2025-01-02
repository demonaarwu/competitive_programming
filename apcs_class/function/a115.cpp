#include<bits/stdc++.h>

using namespace std;

int calculate_points(int table[5][5])
{
    int score = 0;
    for (int y = 0; y < 5; y++)
    {
	if (table[y][0] + table[y][1] + table[y][2] + table[y][3] + table[y][4] == 5)
	{
	    score++;
	}
    }

    for (int x = 0; x < 5; x++)
    {
	if (table[0][x] + table[1][x] + table[2][x] + table[3][x] + table[4][x] == 5)
	{
	    score++;
	}
    }

    if (table[0][0] + table[1][1] + table[2][2] + table[3][3] + table[4][4] == 5)
    {
	score++;
    }

    if (table[0][4] + table[1][3] + table[2][2] + table[3][1] + table[4][0] == 5)
    {
	score++;
    }

    return score;
}

int main()
{
    int table[5][5];
    int record[5][5] = {0};

    for (int y = 0; y < 5; y++)
    {
	for (int x = 0; x < 5; x++)
	{
	    cin >> table[y][x];
	}
    }

    int number;
    cin >> number;

    while (number != -1)
    {
	bool number_found = false;
	for (int y = 0; y < 5 && !number_found; y++)
	{
	    for (int x = 0; x < 5; x++)
	    {
		if (table[y][x] == number)
		{
		    record[y][x] = 1;
		    number_found = true;
		    break;
		}
	    }
	}

	cin >> number;
    }

    int best_score = -1;
    int best_number = 1;

    for (int y = 0; y < 5; y++)
    {
	for (int x = 0; x < 5; x++)
	{
	    if (record[y][x] == 0)
	    {
		record[y][x] = 1;
		int score = calculate_points(record);
		record[y][x] = 0;

		if (score > best_score)
		{
		    best_score = score;
		    best_number = table[y][x];
		}
		else if (score == best_score)
		{
		    if (best_number > table[y][x])
		    {
			best_number = table[y][x];
		    }
		}
	    }
	}
    }

    cout << best_number << endl;
}
