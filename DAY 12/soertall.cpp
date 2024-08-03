#include<iostream>
#include<bits/stdc++.h>
#include"bubblesort.h"
#include"selectionsort.h"
#include"insertionsort.h"
#include"quicksort.h"
using namespace std;
int main(){
    vector<int> arr={3,2,4,67,1,3,7};
    // buble_sort(arr);
    quicksort(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
    accumulate(arr.begin(),arr.end(),0);
    int a=10;
    int b=20;
    int total;
    total=max(a,b);
    cout<<total;
    cout<<endl;
    return 0;
}