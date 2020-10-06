#include<bits/stdc++.h>
using namespace std;

int main()
{
    int citizen, money_of_citizen[1000000]={0}, extra_money=0, maximum;
    int n=sizeof(money_of_citizen)/sizeof(money_of_citizen[0]);

    cin>>citizen;

    for(int i=0; i<citizen; i++)
    {
        cin>>money_of_citizen[i];
    }

    for(int i=0; i<citizen; i++)
    {
        maximum= *max_element(money_of_citizen, money_of_citizen+n);

        if(money_of_citizen[i]<maximum)
        {
            extra_money= extra_money+(maximum-money_of_citizen[i]);
        }
    }

    cout<<extra_money;
}