#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number_of_games, anton=0, danik=0, games[1000000]={0};
    
    char normal[10000000]={0};
    
    cin>>number_of_games;

    for(int i=0; i<number_of_games; i++)
    {
        cin>>normal[i];
        
    }
    for(int i=0; i<number_of_games; i++)
    {
        games[i]=normal[i];
        if(games[i]==65)
        {
            anton++;
        }
        else if(games[i]==68)
        {
            danik++;
        }
    }
    if(anton>danik)
    {
        cout<<"Anton";
    }
    else if(danik>anton)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}