#include<bits/stdc++.h>
using namespace std;
int main(){
    list <int> l;
    list<int>::iterator itr = l.begin();
    int x = 0;
    while (x != -1) {
        cin >> x;
        if (x == -1) {
            break;
        }
        else {
            l.push_back(x);
        }
    }
    
    int idx;
    cin >> idx;
    for (int i = 0; i < idx; i++ ) {
        ++itr;
    }
    l.remove(* itr);
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}