#include<bits/stdc++.h>
using namespace std;

int main()
{
    int strings_number, groups=1;
    string set_of_strings[1000000];

    cin>>strings_number;

    for(int i=0; i<strings_number; i++)
    {
        cin>>set_of_strings[i];
    }

    for(int i=0; i<strings_number-1; i++)
    {
        if(set_of_strings[i]!=set_of_strings[i+1])
        {
            groups++;
        }
    }

    cout<<groups;
}