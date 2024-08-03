#include<iostream>
#include<bits/stdc++.h>
#include <chrono>
using namespace std;


int main(){
    string str="Hello World!";
    string from="World!";
    string to="c++";

    size_t start_pos=str.find(from);
    if(start_pos != string::npos){
        str.replace(start_pos,from.length(),to);

    }
    cout<<"String after replacement : "<<str;
    return 0;

}