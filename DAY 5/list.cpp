#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    l.push_back(10);
    l.push_front(11);
    for(int i : l) cout<<i<<"\t";
    cout<<"\n";
    l.erase(l.begin());
     for(int i : l) cout<<i<<"\t";
     cout<<"\n";

     cout<<"size of list : "<<l.size();
    return 0;
}