#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;

    cin >> length;

    int values[length] = {0};

    for (int i = 0; i < length; i++)
    {
        cin >> values[i];
    }

    int set1 = 0, set2 = 0, set3 = 0;

    for (int i = 0; i < length; i++)
    {
        if (values[i] == 1)
        {
            set1++;
        }
        else if (values[i] == 2)
        {
            set2++;
        }
        else if (values[i] == 3)
        {
            set3++;
        }
    }

    int temp, team_number;

    temp = min(set1, set2);
    team_number = min(temp, set3);

    cout << team_number << endl;
    int temp1 = 0, temp2 = 0, temp3 = 0;

    for (int i = 0; i < team_number; i++)
    {
        for (int j = temp1; j < length; j++)
        {
            if (values[j] == 1)
            {
                cout << j + 1 << " ";
                temp1 = j + 1;
                break;
            }
        }

        for (int j = temp2; j < length; j++)
        {
            if (values[j] == 2)
            {
                cout << j + 1 << " ";
                temp2 = j + 1;
                break;
            }
        }

        for (int j = temp3; j < length; j++)
        {
            if (values[j] == 3)
            {
                cout << j + 1 << " ";
                temp3 = j + 1;
                break;
            }
        }

        cout << endl;
    }
}