
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //braced initializors
    //variable may contain random garbage value. Warning
    int elephant_count;
    int lion_count{};
    int  dog_count{10};
    int cat_count{15};
    //can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    //int new_number{doesnt_exist};
    //int narrowing_conversion(2,9); // compiler error
    cout<<"ELephant count :"<<elephant_count<<endl;
    cout<<"Lion count :"<<lion_count<<endl;
    cout<<"Dog count :"<<dog_count<<endl;
    cout<<"Cat count :"<<cat_count<<endl;

    cout<<"Domesticated animal count  :"<<domesticated_animals;

    
    return 0;
}