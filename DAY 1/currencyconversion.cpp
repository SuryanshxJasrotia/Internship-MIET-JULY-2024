#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   long double value;
   cout<<"ENter the value in rupees : "<<endl;
   cin>>value;
   value=value*106.9030;
   cout<<"Value in pounds = "<<value<<endl;

   long double value2;
   cout<<"ENter the value in pounds : "<<endl;
   cin>>value2;
   value2=value2/106.9030;
   cout<<"Value in rupees = "<<value2<<endl;
   return 0;
}
