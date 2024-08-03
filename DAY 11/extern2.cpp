#include<iostream>
#include<bits/stdc++.h>
#include"extern1.h"
using namespace std;

int main(){
    extern int externall;
    externall++;
    cout<<externall;
    return 0;
}