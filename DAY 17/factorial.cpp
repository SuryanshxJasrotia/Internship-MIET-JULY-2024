#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int x){
    if(x>1){
        return x*(fact (x-1));
        
    }
    else{
        return 1;
    }

}
int main(){
    int num,sum;
    cout<<"Enter number : ";
    cin>>num;
    sum=fact(num);
    cout<<endl;
    cout<<"factorial : "<<sum;
    return 0;
}