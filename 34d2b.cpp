#include<bits/stdc++.h>
using namespace std;

int main()
{
    int total_product, carry_limit, product_price[1000]={0}, taken_price[100]={0}, earning=0, size;

    cin>>total_product>>carry_limit;

    for(int i=0; i<total_product; i++)
    {
        cin>>product_price[i];

        if(product_price[i]<0)
        {
            taken_price[i]= product_price[i]*(-1);
        }

    }

    sort(taken_price, taken_price+sizeof(taken_price)/sizeof(taken_price[0]));

    size=sizeof(taken_price)/sizeof(taken_price[0]);
    for(int i=size-1; i>=size-carry_limit; i--)
    {
        earning+=taken_price[i];
    }
    cout<<earning;
}