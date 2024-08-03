#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int countm=0;
    vector<int> arr={1,0,1,1,0,0,1,1,1};
    for(int i=0;i<arr.size();i++){
        int count=0;
        for(int j=i;j<arr.size();j++){
            if(arr[j]==1){
                count++;
            }
            if(arr[j]==0){
                break;
            }
        }
        if(count>countm){
            countm=count;
        }
    }
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]==1 && arr[i]==arr[i+1]){
    //         countm++;
    //     }
    // }
    cout<<countm;
    return 0;
}