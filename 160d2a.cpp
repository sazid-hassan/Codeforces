#include <bits/stdc++.h>
using namespace std;

main()
{
    int coinsNum;

    cin >> coinsNum;

    int coins[coinsNum], sum = 0, count = 0, temp = 0;

    for (int i = 0; i < coinsNum; i++)
    {
        cin >> coins[i];
        sum = sum + coins[i];
    }

    sort(coins, coins + sizeof(coins) / sizeof(coins[0]), greater<int>());

    for (int i = 0; i < coinsNum; i++)
    {
        temp = temp + coins[i];
        count++;

        if (temp > sum / 2)
        {
            break;
        }
    }

    cout << count;
}