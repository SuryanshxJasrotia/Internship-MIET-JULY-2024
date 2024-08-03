#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //readin a file is doen by using ifstream
    // use ios::app to append not to completely rewrite istead add new  data while also keeping old data in file
    ofstream my_file("example.txt", ios::app);
    if(my_file.fail()){
        cout<<"error openingthe file ! "<<endl;
        return 1;
    }
 
    my_file<<"HI again"<<endl;
    my_file<<"Writing throuh a program now !"<<endl;
    //we use eof function for this purpose  (end of file) --if pointer is at end of file it return true
    my_file.close();

    return 0;
}