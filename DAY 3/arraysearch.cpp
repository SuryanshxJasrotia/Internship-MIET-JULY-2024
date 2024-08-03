#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int array[5]={ 10 ,20 ,30 , 40 , 50};
    int user_input;
    cout<<"ENter the number you want to search in the array "<<endl;
    cin>>user_input;
    int count=0;
    for(auto x: array ){
            if(user_input==x){
                cout<<"number "<<user_input<<"is found at : "<<count;
                exit(0);
            }
            count++;
    }
    cout<<"NOt found";
    return 0;
}