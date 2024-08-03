#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(vector<int> arr)
{
    for (auto num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void buble_sort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
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
void insertionSort(vector<int> &arr)
{
    for (size_t i = 1; i < arr.size(); ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    vector<int> arr = {2, 4, 5, 6, 2, 1, 7};
   
    bool x=true;
   
    while (x==true){
   cout << "ENTER the following inputs: \n 1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Merge Sort\n";
    int ch;
    cin >> ch;
     int ch2;
    switch (ch)
    {
    case 1:
        buble_sort(arr);
        print(arr);
        cout<<endl;
        cout<<"Do you want to try again ?";cout<<endl;
        cout<<"1.Yes\n2.No";cout<<endl;
        cin>>ch2;
        if(ch2==1){
            x=true;
        }
        else{
            x=false;
        }
        break;
    case 2:
        selectionsort(arr);
        print(arr);cout<<endl;
        cout<<"Do you want to try again ?";cout<<endl;
        cout<<"1.Yes\n2.No";cout<<endl;
        cin>>ch2;
        if(ch2==1){
            x=true;
        }
        else{
            x=false;
        }
        break;
    case 3:
        insertionSort(arr);
        print(arr);cout<<endl;
        cout<<"Do you want to try again ?";cout<<endl;
        cout<<"1.Yes\n2.No";cout<<endl;
        cin>>ch2;
        if(ch2==1){
            x=true;
        }
        else{
            x=false;
        }
        break;
    case 4:
        stable_sort(arr.begin(), arr.end());
        print(arr);cout<<endl;
        cout<<endl;
        cout<<"Do you want to try again ?";cout<<endl;
        cout<<"1.Yes\n2.No";cout<<endl;
        cin>>ch2;
        if(ch2==1){
            x=true;
        }
        else{
            x=false;
        }
        break;
    default:
        cout << "Invalid!!";
        cout<<"Do you want to try again ?";
        cout<<"1.Yes\n2.No";
        cin>>ch2;
        if(ch2==1){
            x=true;
        }
        else{
            x=false;
        }
        break;
    }
    }

    return 0;

}