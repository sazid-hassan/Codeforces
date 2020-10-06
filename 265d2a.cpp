#include<bits/stdc++.h>
using namespace std;

int main()
{
    string input1, input2;
    int count=1, j=0;

    cin>>input1>>input2;

    for(int i=0; i<input2.size(); i++)
    {
        if(input1[j]==input2[i])
        {
            count++;
            j++;

        }

    }
    cout<<count;
}