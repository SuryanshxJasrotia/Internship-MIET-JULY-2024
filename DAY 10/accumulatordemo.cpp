#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers={1,2,3,4,5};

    int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total,int n){
        return total +n;
    });
    // auto sum=[=](int total,int n){
    //     for(int i=0;i<n;i++){
    //         total+=numbers[i];
    //     }
    //     return total;
    // };
    cout<<sum;
    return 0;
}