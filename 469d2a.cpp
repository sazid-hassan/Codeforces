#include <bits/stdc++.h>
using namespace std;

main()
{
    int levelNumber;

    cin >> levelNumber;

    bool levelStatus[levelNumber] = {false};

    int p, q;

    cin >> p;

    while (p--)
    {
        int temp;
        cin >> temp;
        levelStatus[temp - 1] = true;
    }

    cin >> q;

    while (q--)
    {
        int temp;
        cin >> temp;
        levelStatus[temp - 1] = true;
    }

    int flag = 1;

    for (int i = 0; i < levelNumber; i++)
    {
        if (levelStatus[i] == false)
        {
            cout << "Oh, my keyboard!";
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "I become the guy.";
    }
}