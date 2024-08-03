#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class swaap{
    int a,b;
    public:
        void getdat(int x, int y){
            a=x;
            b=y;
        }
        void swapp(){
            a=a+b;
            b=a-b;
            a=a-b;
            cout<<a<<"\n"<<b<<endl;
        }
};
int main(){
    swaap a;
    a.getdat(10,20);
    a.swapp();
    return 0;
}