#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> faces;
    faces["Tetrahedron"] = 4;
    faces["Cube"] = 6;
    faces["Octahedron"] = 8;
    faces["Dodecahedron"] = 12;
    faces["Icosahedron"] = 20;
    string s;
    int c = 0;
    while (n--)
    {
        cin >> s;
        c += faces[s];
    }

    cout << c << endl;
}
