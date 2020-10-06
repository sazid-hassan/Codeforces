#include<bits/stdc++.h>
using namespace std;

int main()
{
    int line_number, shot_number, line, bird;
    cin>>line_number;
    int birds_value[line_number];

    for(int i=0; i<line_number; i++)
    {
        cin>>birds_value[i];
    }

    cin>>shot_number;
    for(int i=0; i<shot_number; i++)
    {
        cin>>line>>bird;

        line=line-1;
        int temp1;
        if(line-1>=0 && line+1<=line_number)
        {
            temp1=birds_value[line];
            birds_value[line]=0;
            birds_value[line-1]=birds_value[line-1]+bird-1;
            birds_value[line+1]=birds_value[line+1]+temp1-bird;
        }

        else if (line-1<0 && line+1<=line_number)
        {
            temp1=birds_value[line];
            birds_value[line]=0;
            birds_value[line+1]=birds_value[line+1]+temp1-bird;
        }

        else if (line-1>=0 && line+1>line_number)
        {
            birds_value[line]=0;
            birds_value[line-1]=birds_value[line-1]+temp1-bird;
        }
    }

    for(int i=0; i<line_number; i++)
    {
        cout<<birds_value[i]<<endl;
    }
}