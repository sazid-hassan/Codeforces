#include <bits/stdc++.h>

using namespace std;

int main()
{
    int length,count=1;
    char input[101];
    cin>>input;
    length=strlen(input);
    sort(input,input+length);
    for(int i=0;i<length-1;i++){
        if(input[i]!=input[i+1])
            count++;
    }
    if(count%2==1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}