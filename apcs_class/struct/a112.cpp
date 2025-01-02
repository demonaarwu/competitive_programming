#include <bits/stdc++.h>
#include <strings.h>

using namespace std;

struct Animal
{
    string name;
    int number;
};

struct Place
{
    vector<Animal> animals;
    string name;
};

void print_place(Place place)
{
    vector<Animal> animals = place.animals;

    cout << place.name << ':';

    for (int i = 0; i < animals.size()-1; i++)
    {
	cout << animals[i].name << ' ' << animals[i].number << ',';
    }

    cout << animals[animals.size()-1].name << ' ' << animals[animals.size()-1].number << endl;
}

int main()
{
    int n;
    cin >> n;

    string animal_name;
    int count;
    string place_name;
    vector<Place> places;
    map<string, int> places_map;
    for (int t = 0; t < n; t++)
    {
	cin >> animal_name >> count >> place_name;

	bool place_exist = false;
	for (int i = 0; i < places.size() && !place_exist; i++)
	{
	    if (place_name == places[i].name)
	    {
		place_exist = true;

		bool animal_exist = false;
		vector<Animal> animals = places[i].animals;
		for (int index = 0; index < animals.size() && !animal_exist; index++)
		{
		    if (animal_name == animals[index].name)
		    {
			animals[index].number += count;
			places[i].animals = animals;
			animal_exist = true;
		    }
		}

		if (!animal_exist)
		{
		    Animal animal;
		    animal.number = count;
		    animal.name = animal_name;
		    places[i].animals.push_back(animal);
		}
	    }
	}

	if (!place_exist)
	{
	    Place new_place;
	    Animal animal;
	    animal.number = count;
	    animal.name = animal_name;
	    new_place.name = place_name;
	    new_place.animals.push_back(animal);
	    places.push_back(new_place);
	}
    }

    for (int place_c = 0; place_c < places.size(); place_c++)
    {
	Place place = places[place_c];
	print_place(place);
    }
}
