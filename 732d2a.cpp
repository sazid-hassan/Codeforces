#include<bits/stdc++.h>
using namespace std;

int main()
{
    int price, extra_coin, i=0, piece=0, temp;

    cin>>price>>extra_coin;

    int upgraded_price=price;

    
    for(int i = 0; i<11; i++)
    {
        temp = upgraded_price%10 - extra_coin;
        if(upgraded_price%10==0||temp==0)
        {
            piece=i+1;
            break;
        }

        else
        {
            upgraded_price=upgraded_price+price;
        }
    }

    cout<<piece;
}