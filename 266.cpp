#include<bits/stdc++.h>
using namespace std;

main()
{
    int charactar_number, count=0;

    char input_string[100000];

    cin>>charactar_number;

    for(int i=0; i<charactar_number; i++)
    {
        cin>>input_string[i];
    }

    for(int i=0; i<charactar_number; i++)
    {
        if(input_string[i]==input_string[i+1])
        {
            count++;
        }
    }

    cout<<count;
}