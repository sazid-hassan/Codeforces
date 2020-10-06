#include <bits/stdc++.h>
using namespace std;

int main()
{
    string in_string, second_string;

    getline(cin, in_string);

    int j = 0, count = 0;

    int size_in = in_string.size();


    for(int i = 0; i < size_in; i++)
    {
        if(in_string[i]<123 && in_string[i]>96)
        {
            second_string+=in_string[i];
        }
    }

    int size_second = second_string.size();



    for(int i = 0; i < size_second; i++)
    {
        int j = 0;
        for(j = 0; j < i; j++)
        {
            if(second_string[i]==second_string[j])
            {
                break;
            }
        }
        if(i == j)
        {
            count++;
        }
    }

    cout<< count;

}