#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//removing the element from list
int main(){
      // initilization of list
    list<int> numbers={1,2,3,1,1};

    // print the lsit
    cout<<"List elements : ";
    for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;


    //remove all the elements with value 1
    numbers.remove(1);

    //display modified list
       cout<<"List elements : ";
    for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;

}