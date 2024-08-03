#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5};
    for(int n:a){
        cout<<n<<" ";
    }
    int i=0;
    while(a[i]>'\0'){
        cout<<a[i];
        i++;
    }
    cout<<endl;
    return 0;
}