#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class mutablel{
    mutable int value;
    public:
        mutablel(int val):value(val){}
        void modify()const {value++;cout<<value;}
};
int main(){
    const mutablel x(10);
    x.modify();

    return 0;
    
}