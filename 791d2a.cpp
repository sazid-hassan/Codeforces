#include<bits/stdc++.h>
using namespace std;

int main()
{
    int weight, weight2, count=0;
    cin>>weight>>weight2;

    while(weight<=weight2)
    {
        weight2=weight2*2;
        weight= weight*3;

        count++;
    }

    cout<<count;
}