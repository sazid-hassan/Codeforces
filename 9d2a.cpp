#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input1, input2, maximum;

    
    string output;

    cin>>input1>>input2;

    maximum=max(input1, input2);

    if(maximum==1)
    {
        output="1/1";
    }
    else if(maximum==2)
    {
        output="5/6";
    }
    else if(maximum==3)
    {
        output="2/3";
    }
    else if(maximum==4)
    {
        output="1/2";
    }
    else if(maximum==5)
    {
        output="1/3";
    }
    else if(maximum==6)
    {
        output="1/6";
    }
    
    cout<<output;
}