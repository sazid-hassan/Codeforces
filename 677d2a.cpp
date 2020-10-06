#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_friends, height_of_fence, height_series[10000], space;

    cin>>number_of_friends>>height_of_fence;

    space=number_of_friends;

    for(int i=0; i<number_of_friends; i++)
    {
        cin>>height_series[i];

        if(height_series[i]>height_of_fence)
        {
            space++;
        }
    }
    cout<<space<<endl;
}