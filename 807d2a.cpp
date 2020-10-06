#include <bits/stdc++.h>
using namespace std;

main()
{
    int testcase;
    cin >> testcase;

    int n1, n2, temp1 = 0, temp2 = 0;
    bool result = true, flag = false;
    while (testcase--)
    {
        cin >> n1 >> n2;
        if (temp1 == 0 && temp2 == 0)
        {
            if (n1 != n2)
            {
                flag = true;
            }
            temp1 = n1;
            temp2 = n2;
        }
        else
        {
            if (n1 != n2)
            {
                flag = true;
            }
            else if (n1 > temp1)
            {
                if (n1 == n2)
                {
                    result = false;
                }
            }
            temp1 = n1;
            temp2 = n2;
        }
    }

    if (flag == true)
    {
        cout << "rated";
    }
    else
    {
        if (result == false)
        {
            cout << "unrated";
        }
        else
        {
            cout << "maybe";
        }
    }
}