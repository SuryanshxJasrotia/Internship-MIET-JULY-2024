#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    label:
    float attendance;
    float classes;
    float classes_attended;
    cin>>classes;
    cin>>classes_attended;
    if(classes>=classes_attended){
    attendance=(classes_attended/classes)*100;}
    else{
        cout<<"enter right data :"<<endl;
        goto label;
    }
    if(attendance>75){
        cout<<"can attend exam with attendance percentage :"<<attendance<<"%"<<endl;
    }
    else{
        cout<<"cant attend exam with attendance percentage :"<<attendance<<"%"<<endl;
    }
    return 0;

}