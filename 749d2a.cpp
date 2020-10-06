#include<bits/stdc++.h>
using namespace std;

main ()
{
    int input_number, sum_of_prime;

    cin>>input_number;

    sum_of_prime=input_number/2;

    cout<<sum_of_prime<<endl;

    if(input_number%2==0)
    {
        for(int i=0; i<sum_of_prime; i++)
        {
            cout<<"2 ";
        }
    }
    else
    {
        for(int i=1; i<sum_of_prime; i++)
        {
            cout<<"2 ";
        }
        cout<<"3";
    }
}