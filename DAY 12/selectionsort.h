#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int> arr)
{
    int len = arr.size();
    for (int i = 0; i < len - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}