#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firsteven(vector<int> a,int i){
    if(i<a.size()){
    if(a[i]%2==0){
        return a[i];
    }
    else{
        return firsteven(a,i+1);
    }}
    else{
        return 0;
    }
}
int main(){
    int i=0;
    vector<int> a={1,3,5,8,10,13};
    cout<<firsteven(a,i)<<endl;
    return 0;
}