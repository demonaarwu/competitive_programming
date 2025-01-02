#include <bits/stdc++.h>

using namespace std;

struct Player
{
    int ab;
    vector<string> record;
};

int count_score(string hit, vector<bool> bases)
{
    if (hit == "HR")
    {
        return bases[1] + bases[2] + bases[3] + 1;
    }
    else if (hit == "3B")
    {
        return bases[1] + bases[2] + bases[3];
    }
    else if (hit == "2B")
    {
        return bases[2] + bases[3];
    }
    else
    {
        return bases[3];
    }
}

void print_bases(vector<bool> bases)
{
    cout << bases[1] << ' ' << bases[2] << ' ' << bases[3];
}

vector<bool> create_new_bases(string pa, vector<bool> bases)
{
    vector<bool> new_bases;

    if (pa.compare("1B") == 0)
    {
        new_bases = {0, 1, bases[1], bases[2]};
    }
    else if (pa.compare("2B") == 0)
    {
        new_bases = {0, 0, 1, bases[1]};
    }
    else if (pa.compare("3B") == 0)
    {
        new_bases = {0, 0, 0, 1};
    }
    else
    {
        new_bases = {0, 0, 0, 0};
    }

    return new_bases;
}

int main()
{
    Player Players[10];
    string tmp;

    for (int i = 1; i <= 9; i++)
    {
        cin >> Players[i].ab;

        for (int k = 0; k < Players[i].ab; k++)
        {
            cin >> tmp;
            Players[i].record.push_back(tmp);
        }
    }

    int max_outs;
    cin >> max_outs;

    int outs = 0;
    int scores = 0;
    int current = 1;
    int times = 0;
    vector<bool> bases = {0, 0, 0, 0};

    int half = 0;

    while (max_outs > outs + half * 3)
    {
        if (outs == 3)
        {
            bases = {0, 0, 0, 0};
	    half++;
	    outs = 0;
        }

        string pa = Players[current].record[times];
        if (pa == "FO" || pa == "GO" || pa == "SO")
        {
            outs++;
        }
        else
        {
            scores += count_score(pa, bases);
	    bases = create_new_bases(pa, bases);
        }

	/* print_bases(bases); */
	/* cout << " " << pa << " " << outs << " " << current << endl; */
	times = (current == 9) ? times+1: times;
        current = (current == 9) ? 1: current+1;
    }

    cout << scores << endl;
}
