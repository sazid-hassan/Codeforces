#include <bits/stdc++.h>
using namespace std;

main()
{
    int number_of_city;

    cin >> number_of_city;

    int cities[number_of_city], min_value, max_value;

    for (int i = 0; i < number_of_city; i++)
    {
        cin >> cities[i];
    }

    for (int i = 0; i < number_of_city; i++)
    {
        if (i == 0)
        {
            min_value = (abs(cities[i] - cities[i + 1]));
            max_value = abs(cities[i] - cities[number_of_city - 1]);
        }

        else if (i == number_of_city - 1)
        {
            min_value = abs(cities[i - 1] - cities[i]);
            max_value = abs(cities[0] - cities[i]);
        }

        else
        {
            min_value = min(abs(cities[i] - cities[i - 1]), abs(cities[i] - cities[i + 1]));
            max_value = max(abs(cities[i] - cities[0]), abs(cities[i] - cities[number_of_city - 1]));
        }

        cout << min_value << " " << max_value << endl;
    }
}