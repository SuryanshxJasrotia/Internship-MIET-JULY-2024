#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int ,string> m;
    //1 is key and Aryan is value
    m[1]="Aryan";
    m[2]="Ansh";
    m[4]="Hi";

    m.insert({5,"antika"});
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }



    // cout<<"Find the element "<<m.count(-13)<<endl;

    // m.erase(5);
    // cout<<"after errse"<<endl;
    // for(auto i :m){
    //     cout<<i.first<<" "<<i.second<<" "<<endl;
    // }

    //find the element from map
    auto findElement=m.find(4);
    for (auto i=findElement;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;

    }

    return 0;
}