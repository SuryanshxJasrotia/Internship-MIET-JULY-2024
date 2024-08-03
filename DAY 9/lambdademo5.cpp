#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    auto divide=[](int a, int b)->double{
        if(b==0){
            return 0; //Handle division by zeero
        }
        return static_cast<double>(a)/b;
    };
    cout<<"Division result : "<<divide(10,2)<<endl; //Output: Division result : 5
    cout<<"Division by zero result : "<<divide(10,0)<<endl; //Output : Division by zero result : 0
    return 0;
}