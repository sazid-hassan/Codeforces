#include <bits/stdc++.h>
using namespace std;

main()
{
    string set_string = "qwertyuiopasdfghjkl;zxcvbnm,./", inString;

    char direction;

    cin >> direction >> inString;

    for(int i = 0; i < inString.size(); i++)
    {
        if(direction == 'L')
        {
            for(int j = 0; j < set_string.size(); j++)
            {
                if(inString[i] == set_string[j])
                {
                    inString[i] = set_string[j+1];
                    break;
                }
            }
        }
        else
        {
            for(int j = 0; j < set_string.size(); j++)
            {
                if(inString[i] == set_string[j])
                {
                    inString[i] = set_string[j-1];
                }
            }
        }
        
    }
    cout << inString;
}