#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sum = 0;

    cin >> n;

    while (n)
    {
        string typeHedron;

        cin >> typeHedron;

        if (typeHedron == "Tetrahedron")
        {
            sum += 4;
        }
        else if (typeHedron == "Cube")
        {
            sum += 6;
        }
        else if (typeHedron == "Octahedron")
        {
            sum += 8;
        }
        else if (typeHedron == "Dodecahedron")
        {
            sum += 12;
        }
        else
        {
            sum += 20;
        }

        n--;
    }

    cout << sum;
}