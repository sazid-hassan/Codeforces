#include<bits/stdc++.h>
using namespace std;

int main()
{
    int input_number;

    cin>>input_number;

    if(input_number%5==0)
    {
        int output=input_number/5;
        cout<<output;
    }
    else
    {
        int output=input_number/5+1;
        cout<<output;
    }
}