#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   bool red_light{false};
   bool green_light{true};
   if(red_light==true){
      cout<<"Stop!!"<<endl;
   }
   else{
      cout<<"Go!!"<<endl;
   }
   if(green_light==true){
      cout<<"The light is green "<<endl;
   }
   else{
      cout<<"The light is not green "<<endl;
   }
   cout<<sizeof(bool)<<endl;


   //printing out a bool
   //1 -->> true
   //0 -->> false
   cout << endl;
   cout<<"red light : "<<red_light<<endl;
   cout<<"green light : "<<green_light<<endl;
   cout<<boolalpha;
   cout<<"red_light : "<<red_light<<endl;
   cout<<"green_light : "<<green_light<<endl;



   return 0;
}