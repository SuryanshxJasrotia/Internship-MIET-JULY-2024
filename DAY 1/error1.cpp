
#include<iostream>
using namespace std;
int main(){
    cout<<"hello world"<<var<<endl;
    int value=7/0;
    cout<<value;
    return 0;
}
/*  error: 'var' was not declared in this scope
   28 |     cout<<"hello world"<<var<<endl;
      |                          ^~~
day2.cpp:29:16: warning: division by zero [-Wdiv-by-zero]
   29 |     int value=7/0; */ 


   // cout- character output stream-- to display the output