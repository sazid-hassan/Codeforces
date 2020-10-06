#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0, input_matrix,row_position, column_position;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>input_matrix;

            if(input_matrix==1)
            {
                row_position=i;
                column_position=j;
            }
        }
        
    }
    if(row_position!=2)
    {
        if(row_position<2)
        {
            count=count+2-row_position;
        }
        else
            count=count+row_position-2;
    }
    if(column_position!=2)
    {
        if(column_position<2)
        {
            count=count+2-column_position;
        }
        else
            count=count+column_position-2;
    }

    cout<<count;
}