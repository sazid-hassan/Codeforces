#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row, sum = 0, count = 0;
    cin >> row;
    int arr[row][3];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > 0)
            {
                sum++;
            }
        }
        if (sum > 1)
        {
            count++;
        }
        sum = 0;
    }
    cout << count;
}

/*

5
1 0 0
0 1 0
1 1 1
0 0 1
0 0 0

*/