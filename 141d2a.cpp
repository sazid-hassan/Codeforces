#include<bits/stdc++.h>
using namespace std;

int main()
{
    string first_liine, second_line, third_line, output;
    vector<int> name_values;
    vector<int> found_values;


    cin>>first_liine>>second_line>>third_line;

    int size1=first_liine.size(), size2=second_line.size(), size3=third_line.size();

    for(int i=0; i<size1; i++)
    {
        name_values.push_back(first_liine[i]);
    }
    int name_size=size1+size2;
    for(int i=0, k=size1; i<size2 && k<name_size; i++,k++)
    {
        name_values.push_back(second_line[i]);
    }


    for(int i=0; i<size3; i++)
    {
        found_values.push_back(third_line[i]);
    }

    sort(name_values.begin(), name_values.end());
    sort(found_values.begin(),found_values.end());


    if(size3==size1+size2)
    {
        for(int i=0; i<size3; i++)
        {
            if(name_values[i]!=found_values[i])
            {
                output="NO";
                break;
            }
            else
                output="YES";
        }

        cout<<output;
    }
    else
        cout<<"NO";
}