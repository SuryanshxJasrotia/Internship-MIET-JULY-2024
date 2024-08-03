#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//if list is empty add element to front or else add element to end
int main(){
    list<int> num;
    if(num.empty()){
        num.push_front(1);
        
    }
    else{
        num.push_back(2);
    }
    return 0;
}

