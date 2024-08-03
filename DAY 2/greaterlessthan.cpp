#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<ostream>
#include <thread>
using namespace std;

int main(){
    float a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    
    if(a>b){
        if(a>c) cout<<a<<endl;
        else cout<<c<<endl;
    }
    else {
        if(b>c) cout<<b<<endl;
        else cout<<c;
    }
    return 0;


}