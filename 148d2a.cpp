#include <bits/stdc++.h>
using namespace std;

main()
{
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    int values[d], count = 0;

    for (int i = 0; i < d; i++)
    {
        values[i] = i+1;
    }

    for (int i = 0; i < d; i++)
    {
        if (values[i] % k == 0 || values[i] % l == 0 || values[i] % m == 0 || values[i] % n == 0)
        {
            values[i] == 0;
            count++;
        }
    }

    cout<<count;
}