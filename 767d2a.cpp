#include <bits/stdc++.h>
using namespace std;

main()
{
    int num_snacks;
    cin >> num_snacks;

    int snack_list[num_snacks] = {0}, temp, max = num_snacks;

    for (int i = 0; i < num_snacks; i++)
    {
        cin >> temp;

        snack_list[temp - 1] = 1;
        if (temp == max)
        {
            for (int j = max - 1; j >= 0; j--)
            {
                if (snack_list[j] == 1)
                {
                    cout << j + 1 << " ";
                }

                else
                {
                    max = j + 1;
                    break;
                }
            }
        }

        cout << endl;
    }
}