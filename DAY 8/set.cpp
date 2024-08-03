#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<endl;
    }
    // cout<<endl;
    // list<int> l;
    // l.push_back(1);
    // l.push_back(1);
    // l.push_back(1);
    // l.push_back(1);

    // for(int z:l){
    //     cout<<z<<endl;
    // }
    cout<<"\n ---------------------------------\n";
    set<int>::iterator it=s.begin();
    // it++;
    // s.erase(it);
    // for(auto i:s){
    //     cout<<i<<endl;
    // }
    for(int i=0;i<s.size();i++){
        cout<<*it<<endl;
        it++;
    }


    //find the element is present in set or not 
    // cout<<"is present "<<s.count(7)<<endl;
    // set<int>::iterator itr=s.find(5);
    // for(auto i=itr;it!=s.end();it++){
    //     cout<<*it<<endl;
    // }

    return 0;
}