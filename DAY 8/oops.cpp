#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class person{
    char name[20];
    int id;
    public:
        void getdetail(){
            cout<<"detail is as follows ";
        }
};

int main(){
    person p1; // creatinng the object
    p1.getdetail();

    return 0;
}