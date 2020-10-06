#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, char_num;

    cin >> size >> char_num;

    string password;

    for (int i = 0; i < char_num; i++)
    {
        password += i + 97;
    }

    int temp = size - password.size();

    for (int i = 0; i < temp; i++)
    {
        password += password[i];
    }

    cout << password;
}