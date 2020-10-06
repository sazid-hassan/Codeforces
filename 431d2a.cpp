#include<bits/stdc++.h>
using namespace std;

int main()
{
    int position[4], value_of_series[1000000]={0}, sum=0, j=0;
    string series;

    for(int i=0; i<4; i++)
    {
        cin>>position[i];
    }

    cin>>series;

    for(int i=0; i<series.size(); i++)
    {
        value_of_series[i] = series[i]-48;
        j=value_of_series[i];
        sum= sum+ position[j-1];
    }

    cout<<sum;
}