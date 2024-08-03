#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> s;
    s.push("Aryan");
    s.push("Arya");
    s.push("Suri");
    s.push("hello");
    cout<<"Top element : "<<s.top()<<endl;
    s.pop();
    cout<<"Top element after pop : "<<s.top()<<endl;



    return 0;
}