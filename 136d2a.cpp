#include <bits/stdc++.h>
using namespace std;

main()
{
    int numFrnds;
    cin >> numFrnds;
    int inputArr[numFrnds], outputArr[numFrnds], temp;
    for (int i = 0; i < numFrnds; i++)
    {
        cin >> inputArr[i];

        inputArr[i] = inputArr[i] - 1;
    }

    for (int i = 0; i < numFrnds; i++)
    {
        temp = inputArr[i];

        outputArr[temp] = i + 1;
    }

    for (int i = 0; i < numFrnds; i++)
    {
        cout << outputArr[i] << " ";
    }
}