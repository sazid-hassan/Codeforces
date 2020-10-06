#include <bits/stdc++.h>
using namespace std;

main()
{
    int moves = 0, count = 0, index, size, start=0;
    string input_string;

    cin >> input_string;

    size = input_string.size();

    for (int i = 0; i < size; i++)
    {
        
        index = input_string[i] - 97;

        moves = abs(start - index);

        if (moves > 13)
        {
            moves = 26 - moves;
        }

        count = count + moves;

        start = index;
    }

    cout << count;
}