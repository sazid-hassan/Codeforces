#include<bits/stdc++.h>
using namespace std;

int main()
{
    int length, box[100], temp;

    cin>>length;

    for(int i=1; i<=length; i++)
    {
        cin>>box[i];
    }

    for(int i=1; i<=length; i++)
    {
        for(int j=i+1; j<=length;j++)
        {
            if(box[i]<box[j])
            {
                temp=box[i];
                box[i]=box[j];
                box[j]=temp;
            }
        }
    }

    for(int i=length; i>0; i--)
    {
        cout<<box[i]<<" ";

    }

}