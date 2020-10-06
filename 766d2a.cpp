#include <bits/stdc++.h>
using namespace std;

main()
{
    string first_str, second_str;

    cin >> first_str >> second_str;

    int count = max(first_str.size(), second_str.size()), temp;

    if (first_str == second_str)
    {
        count = -1;
    }

    cout << count;
}