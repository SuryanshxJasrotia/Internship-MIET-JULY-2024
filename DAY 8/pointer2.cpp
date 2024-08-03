#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=10;
    int *j=&i;
    // j=&(i+34);  error
    cout<<*(j);
    
    return 0;
}