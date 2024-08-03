#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//removing element in list using iterator

int main(){
    list<int> num={1,2,3,4,5,6,7};
    list<int>:: iterator itr=num.begin();
     cout<<"List elements : ";
    for(int i:num){
        cout<<i<<" ";
    }
    cout<<endl;
    //move the iterator to the 4h position
    for(int i=0;i<3;i++){
        ++itr;
    }
    //remove the 4th element 
    num.remove(*itr);
    cout<<"List elements : ";
    for(int i:num){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}