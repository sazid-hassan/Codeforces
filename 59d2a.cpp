#include<bits/stdc++.h>
using namespace std;

main()
{
    string input_word;

    int uppercount=0, lowercount=0, half_value;

    cin>>input_word;

    half_value= input_word.size()/2;

    for(int i=0; i<input_word.size(); i++)
    {
        if(input_word[i]<91)
        {
            uppercount++;
        }

        else
            lowercount++;
    }

    if(uppercount>half_value)
    {
        for(int i=0; i<input_word.size(); i++)
        {
            if(input_word[i]>90)
            {
                input_word[i]=input_word[i]-32;
            }
            cout<<input_word[i];
        }
    }
    else
    {
        for(int i=0; i<input_word.size(); i++)
        {
            if(input_word[i]<91)
            {
                input_word[i]=input_word[i]+32;
            }
            cout<<input_word[i];
        }
    }
}