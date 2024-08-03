#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<string> s;
    s.push("Aryan");
    s.push("Arya");
    s.push("Suri");
    s.push("hello");
    cout<<"Front element after pop : "<<s.front()<<endl;
    s.pop();
    cout<<"Front element after pop : "<<s.front()<<endl;
    for(int i=0; i<s.size();i++){
        cout<<s.front()<<endl;
       
    }


    return 0;
}