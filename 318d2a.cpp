#include<bits/stdc++.h>
using namespace std;

main()
{
    long long int n, k;

    cin >> n >> k;

    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2;
    }

}