#include <bits/stdc++.h>

using namespace std;

main()
{
    int cases, sum = 0, unsolved = 0;
    int input_array[100000];

    cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        cin >> input_array[i];
    }

    for(int i=0; i<cases; i++)
    {

        if (input_array[i] > 0)
        {
            sum += input_array[i];
        }

        else if (input_array[i] < 0)
        {
            if (sum == 0)
            {
                unsolved++;
            }

            else
            {
                sum = sum + input_array[i];
            }
        }
    }

    cout << unsolved;
}