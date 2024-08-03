#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string otp(int n){
   string str = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int l = str.length();
    string otp ;
    srand(time(0));
    for(int i=0;i<n;i++){
        otp = otp + str[rand()%l];
    }
    return otp;

}
int main(){
    int len;
    cout<<"Enter the length of otp yow want : ";
    cin>>len;
    cout<<endl;
    cout<<otp(len);
    return 0;
}