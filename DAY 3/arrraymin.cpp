#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[5]={ 10 ,20 ,30 , 40 , 50};
int  min=2345678;

for( auto temp : array){
        if(temp<min) min=temp;
    }
    cout<<"minimum element of aarray is : "<<min<<endl;

return 0;
}