#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nums(int n){
    int d;int s;
    if(n!=0){
        d=n%10;
        n=n/10;
        s=d+nums(n);
    }
    else{
        return 0;
    }
    return s;
}
int main(){
    int num,sum;
    cout<<"Enter number : ";
    cin>>num;
    sum=nums(num);
    cout<<endl;
    cout<<"Sum : "<<sum;
    return 0;
}