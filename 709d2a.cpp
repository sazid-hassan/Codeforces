#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int orange_number, max_size, container_size, juice_amount=0, clean_time=0, value;

    cin>>orange_number>>max_size>>container_size;

    while(orange_number--)
    {
        cin>>value;

        if(value<=max_size)
        {
            juice_amount=juice_amount+value;
            if(juice_amount>container_size)
            {
                clean_time++;
                juice_amount=0;
            }
        }
    }

    cout<<clean_time;
}