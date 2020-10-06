#include<bits/stdc++.h>
using namespace std;

int main()
{
    string first, second;
    cin>>first>>second;

    int length =first.size();

    for(int i=0; i<length; i++)
    {
        first[i]=tolower(first[i]);
        second[i]=tolower(second[i]);
    }
    if(first>second)
    {
        cout<<"1";
    }
    else if(first<second)
    {
        cout<<"-1";
    }
    else
    {
        cout<<0;
    }

}