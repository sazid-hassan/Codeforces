#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

int main()
{
    lld elementNum, testCase, cases, startPoint, endPoint, sum = 0;

    cin >> elementNum;

    lld inArr[elementNum], sorted_tempArr[elementNum], unsorted_tempArr[elementNum];

    for (lld i = 0; i < elementNum; i++)
    {
        cin >> inArr[i];
    }

    for (lld i = 0; i < elementNum; i++)
    {
        sum = sum + inArr[i];
        unsorted_tempArr[i] = sum;
    }
    sort(inArr, inArr + elementNum);
    sum = 0;
    for (lld i = 0; i < elementNum; i++)
    {
        sum = sum + inArr[i];
        sorted_tempArr[i] = sum;
    }
    cin >> testCase;

    while (testCase--)
    {
        cin >> cases >> startPoint >> endPoint;
        sum = 0;

        if (cases == 1)
        {
            if (startPoint > 1)
            {
                sum = unsorted_tempArr[endPoint - 1] - unsorted_tempArr[startPoint - 2];
            }
            else
            {
                sum = unsorted_tempArr[endPoint - 1];
            }
        }
        else
        {
            if (startPoint > 1)
            {
                sum = sorted_tempArr[endPoint - 1] - sorted_tempArr[startPoint - 2];
            }
            else
            {
                sum = sorted_tempArr[endPoint - 1];
            }
        }

        cout << sum << endl;
    }
}