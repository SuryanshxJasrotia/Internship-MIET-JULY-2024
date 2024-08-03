#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    string str="Hello World!";
    size_t found=str.find("f");
    if(found!= string::npos){
        cout<<"substring found at index: "<<found<<endl;
    }
    else{
        cout<<"string not found !!!!!";
    }

    return 0;
}