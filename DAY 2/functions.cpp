#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void add(float x , float y){
    cout<<x+y<<endl;
}
void add(float x, float y, float z){
    cout<<x+y+z<<endl;
}
void div(float x, float y){
    cout<<x/y<<endl;
}
void sub(float x, float y){
    cout<<x-y<<endl;
}
void mul(float x, float y){
    cout<<x*y<<endl;
}
void rem(int x, int y){
    cout<<x%y<<endl;
}
int main(){
    // float number1;
    // cout<<"Enter the first number :";
    // cin>>number1;
    // float number2;
    // cout<<"Enter the first number :";
    // cin>>number2;
    // add(number1,number2);
    add(7,7);
    sub(7,7);
    mul(7,7);
    div(7,7);
    rem(7,7);
    add(7,7,7);
    
    return 0;
}

//why do we need user defined functions
// ans we need user defined functions to produce a specific output for some or none input that if the method used to produce the desired output in not defined in the predefined functions


//function overloading is a method used to use in  a parameterised function for different numbers of parameters, it performs different instructions according to the definitions only the function name remains same

