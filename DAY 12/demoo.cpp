#include<iostream>
#include"demo.h"
using namespace std;
void demo::input(){
    cout<<"ENter : "<<endl;
    cin>>a>>b;
}

void demo::show(){
    cout<<"\n"<<a<<" "<<b<<endl;
}

int main(){
    demo obj;
    obj.input();
    obj.show();
    return 0;
}