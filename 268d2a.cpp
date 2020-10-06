#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase, count=0, home_color[100], guest_color[100];
    
    cin>>testcase;

    for(int i=0; i<testcase; i++)
    {
        cin>>home_color[i]>>guest_color[i];
    }

    for(int i=0; i<testcase; i++)
    {
        for(int j=0; j<testcase; j++)
        {
            if(home_color[i]==guest_color[j])
            {
                count++;
            }
        }
    }

    cout<<count;
}