#include <bits/stdc++.h>
using namespace std;

main()
{
    long long int count = 0, case_operation, collection, operations;

    cin >> operations >> collection;

    for (int i = 0; i < operations; i++)
    {
        char sign;

        cin >> sign >> case_operation;

        if (sign == '+')
        {
            collection = collection + case_operation;
        }
        else if (sign == '-')
        {
            if (case_operation > collection)
            {
                count++;
            }

            else
            {
                collection = collection - case_operation;
            }
        }
    }

    cout<<collection<<" "<<count;
}