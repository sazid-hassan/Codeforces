#include <iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int i, j, n, count = 0;
 
 
    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
 
    return 0;
}