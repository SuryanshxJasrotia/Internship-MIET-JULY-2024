#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    cout<<"Enter stack size"<<endl;
    int n;
    cin>>n;
    cout<<"Stack operations"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Top"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter the choice : "<<endl;
    int ch;
    cin>>ch;
    while(ch!=4){
        switch(ch){
            case 1:
            if(s.size()==n){
                cout<<"Stack is full"<<endl;
                break;
            }
            else{
            int x;
            cout<<"Enter the value to be inserted into the stack : "<<endl;
            cin>>x;
            s.push(x);}
            break;
            case 2:
            s.pop();
            break;
            case 3:
            cout<<s.top();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
        cout<<"Enter the choice : "<<endl;
        cin>>ch;
    }
    return 0;
}