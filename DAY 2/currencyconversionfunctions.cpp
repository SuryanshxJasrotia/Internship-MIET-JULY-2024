#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 2) If

//  x = 2 y = 5 z = 0

//  then find values of the following expressions:

//  a. x == 2 b. x != 5

//  c. x != 5 && y >= 5 d. z != 0 || x == 2

//  e. !(y < 10)

float rupeestopound(float rupees){
    return rupees/106.99;
}
float poundtorupees(float pound){
    return pound*106.99;
}
float rupeestodollar(float rupees){
    return rupees/83.52;
}
float dollartorupees(float dollar){
    return dollar*83.52;
}
float rupeestoyuan(float rupees){
    return rupees/11.48;
}
float yuantorupees(float yuan){
    return yuan*11.48;
}
int main(){
    float rupees;
    cout<<"Enter the amount in rupees : ";
    cin>>rupees;
    cout<<"The amount in pound is : "<<rupeestopound(rupees)<<endl;
    cout<<"The amount in dollar is : "<<rupeestodollar(rupees)<<endl;
    cout<<"The amount in yuan is : "<<rupeestoyuan(rupees)<<endl;
    float pound;
    cout<<"Enter the amount in pound : ";
    cin>>pound;
    cout<<"The amount in rupees is : "<<poundtorupees(pound)<<endl;
    float dollar;
    cout<<"Enter the amount in dollar : ";
    cin>>dollar;
    cout<<"The amount in rupees is : "<<dollartorupees(dollar)<<endl;
    float yuan;
    cout<<"Enter the amount in yuan : ";
    cin>>yuan;
    cout<<"The amount in rupees is : "<<yuantorupees(yuan)<<endl;
    return 0;
}

