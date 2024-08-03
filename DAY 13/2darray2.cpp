#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3],row,col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the element in the matrix M*n"<<endl;
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}