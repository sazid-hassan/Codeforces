#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> value_array;
    string input_string;

    cin>>input_string;

    int size= input_string.size();

    for(int i=0; i<size; i++)
    {
        if(i%2==0)
        {
            value_array.push_back(input_string[i]-48);
        }
    }

    int vect_size=value_array.size(), temp;
    //cout<<vect_size;

    for(int i=0; i<vect_size; i++)
    {
        for(int j=0; j<vect_size-1; j++)
        if(value_array[j]>value_array[j+1])
        {
            temp=value_array[j];
            value_array[j]=value_array[j+1];
            value_array[j+1]=temp;
        }
    }

    for(int i=0; i<vect_size-1; i++)
    {
        cout<<value_array[i]<<"+";
    }
    cout<<value_array[vect_size-1];
}