#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //readin a file is doen by using ifstream

    ifstream my_file("example.txt");
    if(my_file.fail()){
        cout<<"error openingthe file ! "<<endl;
        return 1;
    }

    string line;

    while(!my_file.eof()){
        
    }
    //we use eof function for this purpose  (end of file) --if pointer is at end of file it return true
    my_file.close();

    return 0;
}