#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase)
    {
        int a, b, moves = 0;
        cin >> a >> b;

        if (a % b != 0)
        {
            moves = a % b;
            cout << b - moves << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        testCase--;
    }
}