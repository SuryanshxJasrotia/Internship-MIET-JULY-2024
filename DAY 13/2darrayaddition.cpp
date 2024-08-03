#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{1,2,3},{2,2,3}};
    int row=3;
    int col=3;
    int sum=0;
    //sum of first row;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // if(i==0){
            //     sum+=arr[i][j];
            // }
            if(i+j==row-1){
                sum+=arr[i][j];
            }
            // if(i==j){
            //     sum+=arr[i][j];
            // }
        }
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}