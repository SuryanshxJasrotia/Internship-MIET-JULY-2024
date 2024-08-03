#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> words={"Hello","World","from","C++"};
    //using accumulate with labda to concentrate strings
    string resut=accumulate(words.begin(),words.end(),string(""),[](string total, string word){
        return total+(total.empty() ? "":" ")+word;
    });
    cout<<"Concentrated string : "<<resut<<endl;
    return 0;
}