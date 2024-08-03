
#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){
    vector<int> a={5,7,3,9,1};
    
    cout<<"capacity : "<<a.capacity()<<endl;

//    cout<< a.data()<<endl;

   cout<<"First element "<<a.front()<<endl;
   cout<<"Last element  "  <<a.back()<<endl;

   cout<<"size of vector"<<size(a)<<endl;
    cout<<"-----------------------------------------------"<<endl;
    a.push_back(10);
    a.push_back(12);

    for (int i : a){
        cout<<i<<"\t";
    }
    cout<<"\n";
    a.pop_back();
     for (int i : a){
        cout<<i<<"\t";
    }
    cout<<"\n";

    cout<<"size of vector"<<size(a)<<endl;

    return 0;

}