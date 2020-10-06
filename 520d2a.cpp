#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, x = 97, count = 0;
    cin >> n;

    char inString[n];

    for (int i = 0; i < n; i++)
    {
        cin >> inString[i];
        if (inString[i] < 91)
        {
            inString[i] = inString[i] + 32;
        }
    }
    for (int i = x; i < x + 26; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(inString[j]==i)
            {
                count++;
                break;
            }
        }
    }

    if( count == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

}