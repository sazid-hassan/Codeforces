#include<bits/stdc++.h>
using namespace std;
int main()
{
    int card_number,i,j,sum1=0,sum2=0,count=0,l,max_value;
    cin>>card_number;
    int a[card_number];
    for(i=0;i<card_number;i++)
    {
        cin>>a[i];
    }
    for(l=0,i=0,j=card_number-1;l<card_number;l++,i++,j--)
    {
        max_value=max(a[i],a[j]);
        if(count==0)
        {
            sum1=sum1+max_value;
            count=1;
        }
        else if(count==1)
        {
            sum2=sum2+max_value;
            count=0;
        }
 
        if(a[i]==max_value)
            j++;
        else
            i--;
 
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
 
}
 