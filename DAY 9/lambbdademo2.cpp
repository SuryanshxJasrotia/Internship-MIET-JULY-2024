#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int y=20;
    auto add=[=](int a){
        return x+y+a;;
    };
cout<<"SUM : "<<add(5)<<endl;

auto addByRef=[&x,&y](int a){
    x=30;//modifying x
    return x+y+a;
};
cout<<"Sum reference : "<<addByRef(5)<<endl;
cout<<"x after modification : "<<x<<endl;

return 0;

}