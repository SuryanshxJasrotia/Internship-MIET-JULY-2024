#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// write a progam to find the  max element from the list
int main(){
    list<int> l;
    int n;
    cout<<"Enter the number of elements in the list: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    cout<<endl;
    cout<<"The maximum element in the list is: ";
    cout<<*max_element(l.begin(),l.end());
    return 0;
}