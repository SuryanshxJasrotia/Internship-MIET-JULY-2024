#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    // initilization of list
    list<int> numbers={1,2,3,4};

    // print the lsit
    cout<<"List elements : ";
    for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;
    //psuh front and push back functionn
    numbers.push_front(0);
    numbers.push_back(5);
    cout<<"List after push front and push back : ";
     for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;

    //accessing the list element 
    //print the first element in the lsit using front()
    cout<<numbers.front()<<endl;
    //print the last element in the lsit using back()
    cout<<numbers.back()<<endl;
    cout<<endl;


    //removing the last element of the list
    numbers.pop_back();
    numbers.pop_front();

    // print the lsit after performing all the above functions
    cout<<"Final list : ";
       for(int i:numbers){
        cout<<i<<" ";
    }
    cout<<endl;

    /* 
    Funnctions   Description
    reverse()    Reverse the order of the elements
    sort()       Aorts the list elements in a particular order
    unique()     Remove consecutive duplocate elements
    empty()      checks wheteher the lsit is empty  or not
    size()       return the number of elemn=ents in the list
    clear()      clear all the values from the list
    merge()      merge two sorted lsit
    */



   /*
   Access the elements using an iterator
   we can use iterators to access a lsit element at a soecific position
   example:-
   */
    list<int>::iterator itr=numbers.begin();

  //increment itr to point to the 2nd element

    ++itr;
    //dsiplay the 2nd element
    cout<<"Second element : "<<*itr<<endl;
    //increment itr to pint the 4th element 
    ++itr;
    
    //display the 4th element 
    cout<<"Fourth element : "<<*itr<<endl;


    numbers.push_back(5);
    for(auto i=0;i<3;i++){
        if(i==0||i==2)
        cout<<*itr<<" ";
        itr++;
    }
    cout<<endl;
    return 0;
}