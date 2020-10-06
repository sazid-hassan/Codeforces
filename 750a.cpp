#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count, problem_counter=0, solved=0, problem_number;

    cin>>problem_number>>count;

    while(count<240)
    {
        count=count+problem_counter*5;
        
        if(count<=240)
        {
            solved=problem_counter;
        }
        else{
            break;
        }

        problem_counter++;

        if(problem_counter>problem_number)
        {
            break;
        }
    }
    cout<<solved;
}