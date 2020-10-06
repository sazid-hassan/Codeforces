#include <bits/stdc++.h>
using namespace std;

main()
{
    int cases;

    cin >> cases;

    int inArr[cases], count = 0;

    for (int i = 0; i < cases; i++)
    {
        cin >> inArr[i];
    }

    sort(inArr, inArr + cases);

    for (int i = 1; i < cases - 1; i++)
    {
        if (inArr[i] > inArr[0] && inArr[i] < inArr[cases - 1])
        {
            count++;
        }
    }

    cout << count;
}