#include <bits/stdc++.h>
using namespace std;

main()
{
    int cakeNumber, productionTime, ovenRange, newOvenTime;

    cin >> cakeNumber >> productionTime >> ovenRange >> newOvenTime;

    int temp = (productionTime + newOvenTime) / productionTime;

    if(temp * ovenRange < cakeNumber)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}    