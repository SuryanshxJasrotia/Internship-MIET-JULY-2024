#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//insert the elemnt in lsit  at a specific position
//use insert() function : list.insert(iterator,value)
int main(){
    list<int> num={1,2,3};
    list<int>::iterator itr=num.begin();
    ++itr;
    ++itr;
    //now iterator at 3rd position in linked list
    //now change the value 
    num.insert(itr,0);


    for(auto i: num){
        cout<<i<<" ";
    }
    
    return 0;

}