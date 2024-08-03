#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> & arr){
    for(size_t i=1;i<arr.size();++i){
        int key=arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}
int main(){
    vector<int> arr={5,2,4,6,1,3};
    insertionSort(arr);
    for(int num : arr){
        cout<<num<<" ";
    }


    return 0;
}