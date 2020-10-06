#include <bits/stdc++.h>
using namespace std;

main()
{
    long long int n, t;
    cin >> n >> t;

    int temp = to_string(t).size();

    if (temp > n)
    {
        cout << -1;
    }
    else
    {
        string inStr = to_string(t), newStr = "";
        int temp2 = n - temp;
        while (temp2--)
        {
            newStr = newStr + "0";
        }
        cout << inStr << newStr;
    }
}