#include<bits/stdc++.h>
using namespace std;

int main()
{
    int red_sock, blue_sock, fashioned_pair, same_pair;

    cin>>red_sock>>blue_sock;

    if(red_sock>blue_sock)
    {
        fashioned_pair=blue_sock;
        same_pair=(red_sock-blue_sock)/2;
        cout<<fashioned_pair<<" "<<same_pair;

    }
    else if(blue_sock>red_sock)
    {
        fashioned_pair=red_sock;
        same_pair=(blue_sock-red_sock)/2;
        cout<<fashioned_pair<<" "<<same_pair;
    }
    else
        cout<<red_sock<<" "<<"0";
}