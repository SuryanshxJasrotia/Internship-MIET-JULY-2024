//Staandard Template Library
//container -(Sequence container,Associate container, Container adapter)
//Sequence container (vector,Dequeue,list)
//Associate container ()
//Container adapter ()

#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

void findDuplicates(const array<int,8>& a) {
    unordered_set<int> seen; // Hash set to store seen elements

    for (int num : a) {
        if (seen.count(num) > 0) {
            cout << "Duplicate found: " << num << endl;
        } else {
            seen.insert(num);
        }
    }
}

int main(){

    array<int,8> a={1,3,4,3,4,4,5,5};
    int size =a.size();
    cout<<size<<endl;

    int sum=accumulate(a.begin(), a.end(),0);
    cout<<sum<<endl;

    // int max=max_element(a.begin(), a.end());

    bool empty=a.empty();
    
    cout<<empty<<endl;
    // int min=min_element(a.begin(), a.end());

    int first_element= a.front();
    cout<<first_element<<endl;

    int last_element=a.back();
    cout<<last_element<<endl;


    findDuplicates(a);

    sort(a.begin(),a.end());

    for(int i=0;i<8;i++){
        cout<<a[i]<<endl;
    }


    

    return 0;
}
