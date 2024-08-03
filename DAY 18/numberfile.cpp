#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream my_file("numbername.txt");
    string line;
    int ans=0;
    int count=0;
    while(!my_file.eof()){
        getline(my_file,line);
        stringstream obj(line);
        string temp;
        int tempint;
        while(!obj.eof()){
            obj>>temp;
            if(stringstream(temp)>>tempint){
                ans+=tempint;
            }
        }
count ++;
    }
    cout<<" Average  : "<<float(float(ans)/count)<<endl;
    my_file.close();
    return 0;
}