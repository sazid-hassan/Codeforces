#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, billAmount = 0;

    cin >> n;

    billAmount = n / 100 +
                 (n % 100) / 20 +
                 ((n % 100) % 20) / 10 +
                 (((n % 100) % 20) % 10) / 5 +
                 ((((n % 100) % 20) % 10)) % 5;

    cout << billAmount;
}