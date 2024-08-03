#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    for(int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            // if(i+j>5) cout<<"* "; 
            if(i<=j) cout<<"* ";
            // if(i==1||i==4||j==1||j==4) cout<<"* ";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}