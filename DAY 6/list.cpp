//code to implement list using stl in cpp
#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"list after erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    int size=l.size();
    cout<<"size of list is "<<size<<endl;

    l.resize(5);
    cout<<"list after resize "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}