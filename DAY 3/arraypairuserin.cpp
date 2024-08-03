#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[6];
    int value=7;
    int count=0;
    int count2=0;
    for(auto x : a){
        cin>>a[count2];
        count2++;
    } 
    for (int i=0;i<6;i++){
        for (int j=i+1;j<6;j++){
            for(int k=j+1;k<6;k++){
                if(a[i]+a[j]+a[k]==value){
                    count++;
                }
            }
        }
    }
    cout<<"count of pairs with sum 7 :"<<count<<endl;
    return 0;
}