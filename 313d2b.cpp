#include <bits/stdc++.h>
using namespace std;

main()
{
    string inString;
    cin >> inString;

    int inArray[100009], sum = 0;

    for (int i = 1; i < inString.size(); i++)
    {
        if (inString[i] == inString[i - 1])
        {
            sum++;
        }
        inArray[i] = sum;
    }

    int testcase;

    cin >> testcase;

    while (testcase--)
    {
        int leftPoint, rightPoint;

        cin >> leftPoint >> rightPoint;

        cout << inArray[rightPoint - 1] - inArray[leftPoint - 1] << endl;
    }
}
