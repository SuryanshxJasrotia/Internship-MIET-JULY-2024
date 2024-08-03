#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int apple_count{5};
    int orange_count{10};
    int  fruit_count=apple_count+orange_count;

    //int bad_initialization (doesnt_exist3 + doesnt_exist4)

    //Information loss, less safe than braced initializers
    int narrowing_conversion_assignment(2.9); 
    
    cout<<"Bike count :"<<apple_count<<endl;
    cout<<"Orange count :"<<orange_count<<endl;
    cout<<"Fruit count :"<<fruit_count<<endl;
    cout<<"Narrowing conversion : :"<<narrowing_conversion_assignment<<endl;//will lose info

   
    return 0;

}