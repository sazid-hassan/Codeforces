#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_problems, input[10000][3], sum_of_row = 0, count = 0;

    cin >> number_of_problems;

    for (int i = 0; i < number_of_problems; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input[i][j];
        }
    }
    for (int i = 0; i < number_of_problems; i++)
    {
        sum_of_row=0;
        for (int j = 0; j < 3; j++)
        {
            sum_of_row = sum_of_row + input[i][j];
            
        }
        if (sum_of_row > 1)
            {
                count++;
            }
    }
    cout << count;
}